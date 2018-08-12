#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<pthread.h>
#include<time.h>
#include "plisten.h"
#include "puart.h"
#include "pwork.h"
#include "pvoice.h"
#include "playback.h"
#include "playback_wav.h"

#include <curl/curl.h>
#include "json.h"
#include "getinmemory.h"
#include "postcallback.h"
#include "voiceclient.h"

pthread_t tid;
pthread_t tlistenid;
pthread_t tuartid;
pthread_t tvoiceid;
pthread_t tworkid;
sigset_t set;

int giExit = 0;
void myfunc()
{
	printf("hello\n");
}
static void *mythread(void*p){
	int signum;
	while(1){
		sigwait(&set,&signum);
		if(SIGUSR1==signum)
            myfunc();
		if(SIGUSR2==signum)
		{
            printf("mythread Iwillsleep2secondandexit\n");
            sleep(2);
            break;
		}
	}
}
sigset_t get_sigset(void){
    return set;    
}
int getexitsigle()
{
    return giExit;    
}
int main()
{
	char tmp;
	void *status;

    weather stweather;

	sigemptyset(&set);
	sigaddset(&set,SIGUSR1);
	sigaddset(&set,SIGUSR2);
	sigprocmask(SIG_SETMASK,&set,NULL);
	
	pthread_create(&tid,NULL,mythread,NULL);
	pthread_create(&tlistenid,NULL,listenmain,NULL);
	pthread_create(&tuartid,NULL,puartmain,NULL);
    pthread_create(&tworkid,NULL,workmain,NULL);
    pthread_create(&tvoiceid,NULL,voicemain,NULL);
    voicesockopen();	
    while(1)
    {    
        printf(":");
        scanf("%c",&tmp);
        if('a'==tmp)
        {
			testvioce();
            pthread_kill(tid,SIGUSR1);//发送SIGUSR1，打印字符串。
        }
		else if ('p'==tmp)
        {
            pthread_kill(tid,SIGUSR1);//发送SIGUSR1，打印字符串。
			pthread_kill(tlistenid,SIGUSR1);
            pthread_kill(tworkid,SIGUSR1);
 		}
		else if ('w'==tmp)
        {
			playback_wav("/root/02.wav");
            pthread_kill(tid,SIGUSR1);//发送SIGUSR1，打印字符串。
 		}
		else if ('e'==tmp)
        {
			char *pvstr;
		    curl_get_weather(pvstr,&stweather);
			printf("weather message is %s,%d,h:%s,l:%s\n",pvstr,stweather.tmp,stweather.shightemp,stweather.slowtemp);
            pthread_kill(tid,SIGUSR1);//发送SIGUSR1，打印字符串。
 		}
		else if ('r'==tmp)
        {
			char svstr[100]={0};
			sprintf(svstr,"当前温度%d 摄氏度  今天    %s    %s",stweather.tmp,stweather.shightemp,stweather.slowtemp);
            printf("svstr is %s,len is %d",svstr,strlen(svstr));
			curl_post_data(svstr,strlen(svstr));
            pthread_kill(tid,SIGUSR1);//发送SIGUSR1，打印字符串。
 		}
		else if ('t'==tmp)
        {
			char *pvstr;
			char svstrp[100]={0};
		    curl_get_weather(pvstr,&stweather);
			if (stweather.status != 200)
			{
				sprintf(svstrp,"获取天气失败");
			}
			else
			{
			    printf("weather message is %s,%d,h:%s,l:%s\n",pvstr,stweather.tmp,stweather.shightemp,stweather.slowtemp);
				/*sprintf(svstrp,"当前温度%d 摄氏度  今天    %s    %s   %s   %s", stweather.tmp,stweather.shightemp,stweather.slowtemp,
																			stweather.stype,
																			stweather.snotice);*/
				sprintf(svstrp,"今天天气    %s  度   到  %s  度             %s     ", stweather.slowtemp,stweather.shightemp,
																			stweather.stype);
			}
			printf("svstrp message is %s\n",svstrp);
			
			curl_post_data(svstrp,strlen(svstrp));
			playback_wav("./tmp.wav");

            pthread_kill(tid,SIGUSR1);//发送SIGUSR1，打印字符串。
 		}
        else if('q'==tmp)
        {
			//发出SIGUSR2信号，让线程退出，如果发送SIGKILL，线程将直接退出。
			pthread_kill(tid,SIGUSR2);
			pthread_kill(tlistenid,SIGUSR2);
            giExit = -1;
			//等待线程tid执行完毕，这里阻塞。
			pthread_join(tid,&status);
			pthread_join(tlistenid,&status);
			pthread_join(tuartid,&status);
			pthread_join(tvoiceid,&status);
			printf("finish\n");
            voicesockclose();
			break;
        }
        else
            continue;
    }
    return 0;
}
