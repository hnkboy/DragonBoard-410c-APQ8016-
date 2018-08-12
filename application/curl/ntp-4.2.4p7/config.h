/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Is adjtime() accurate? */
#define ADJTIME_IS_ACCURATE 1

/* CHU audio/decoder? */
#define AUDIO_CHU 1

/* Declare char *sys_errlist array */
/* #undef CHAR_SYS_ERRLIST */

/* ACTS modem service */
#define CLOCK_ACTS 1

/* Arbiter 1088A/B GPS receiver */
#define CLOCK_ARBITER 1

/* ARCRON support? */
#define CLOCK_ARCRON_MSF 1

/* Austron 2200A/2201A GPS receiver? */
#define CLOCK_AS2201 1

/* PPS interface? */
#define CLOCK_ATOM 1

/* Datum/Bancomm bc635/VME interface? */
/* #undef CLOCK_BANC */

/* Chronolog K-series WWVB receiver? */
#define CLOCK_CHRONOLOG 1

/* CHU modem/decoder */
#define CLOCK_CHU 1

/* Diems Computime Radio Clock? */
#define CLOCK_COMPUTIME 1

/* Datum Programmable Time System? */
#define CLOCK_DATUM 1

/* ELV/DCF7000 clock? */
#define CLOCK_DCF7000 1

/* Dumb generic hh:mm:ss local clock? */
#define CLOCK_DUMBCLOCK 1

/* Forum Graphic GPS datating station driver? */
#define CLOCK_FG 1

/* TrueTime GPS receiver/VME interface? */
/* #undef CLOCK_GPSVME */

/* Heath GC-1000 WWV/WWVH receiver? */
#define CLOCK_HEATH 1

/* HOPF 6021 clock? */
#define CLOCK_HOPF6021 1

/* HOPF PCI clock device? */
#define CLOCK_HOPF_PCI 1

/* HOPF serial clock device? */
#define CLOCK_HOPF_SERIAL 1

/* HP 58503A GPS receiver? */
#define CLOCK_HPGPS 1

/* IRIG audio decoder? */
#define CLOCK_IRIG 1

/* JJY receiver? */
#define CLOCK_JJY 1

/* Rockwell Jupiter GPS clock? */
/* #undef CLOCK_JUPITER */

/* Leitch CSD 5300 Master Clock System Driver? */
#define CLOCK_LEITCH 1

/* local clock reference? */
#define CLOCK_LOCAL 1

/* Meinberg clocks */
#define CLOCK_MEINBERG 1

/* Magnavox MX4200 GPS receiver */
/* #undef CLOCK_MX4200 */

/* NeoClock4X */
#define CLOCK_NEOCLOCK4X 1

/* NMEA GPS receiver */
#define CLOCK_NMEA 1

/* Motorola UT Oncore GPS */
/* #undef CLOCK_ONCORE */

/* Palisade clock */
#define CLOCK_PALISADE 1

/* PARSE driver interface */
#define CLOCK_PARSE 1

/* Conrad parallel port radio clock */
#define CLOCK_PCF 1

/* PCL 720 clock support */
/* #undef CLOCK_PPS720 */

/* PST/Traconex 1020 WWV/WWVH receiver */
#define CLOCK_PST 1

/* DCF77 raw time code */
#define CLOCK_RAWDCF 1

/* RCC 8000 clock */
#define CLOCK_RCC8000 1

/* RIPE NCC Trimble clock */
/* #undef CLOCK_RIPENCC */

/* Schmid DCF77 clock */
#define CLOCK_SCHMID 1

/* clock thru shared memory */
#define CLOCK_SHM 1

/* Spectracom 8170/Netclock/2 WWVB receiver */
#define CLOCK_SPECTRACOM 1

/* KSI/Odetics TPRO/S GPS receiver/IRIG interface */
/* #undef CLOCK_TPRO */

/* Trimble GPS receiver/TAIP protocol */
#define CLOCK_TRIMTAIP 1

/* Trimble GPS receiver/TSIP protocol */
#define CLOCK_TRIMTSIP 1

/* Kinemetrics/TrueTime receivers */
#define CLOCK_TRUETIME 1

/* TrueTime 560 IRIG-B decoder? */
/* #undef CLOCK_TT560 */

/* Ultralink M320 WWVB receiver? */
#define CLOCK_ULINK 1

/* VARITEXT protocol */
#define CLOCK_VARITEXT 1

/* WHARTON 400A Series protocol */
#define CLOCK_WHARTON_400A 1

/* WWV audio driver */
#define CLOCK_WWV 1

/* Zyfer GPStarplus */
#define CLOCK_ZYFER 1

/* Enable debugging? */
#define DEBUG 1

/* Enable processing time debugging? */
/* #undef DEBUG_TIMING */

/* Declaration style */
/* #undef DECL_ADJTIME_0 */

/* Declaration style */
/* #undef DECL_BCOPY_0 */

/* Declaration style */
/* #undef DECL_BZERO_0 */

/* Declaration style */
/* #undef DECL_CFSETISPEED_0 */

/* Declare errno? */
/* #undef DECL_ERRNO */

/* Declaration style */
/* #undef DECL_HSTRERROR_0 */

/* Declare h_errno? */
#define DECL_H_ERRNO 1

/* Declaration style */
/* #undef DECL_INET_NTOA_0 */

/* Declaration style */
/* #undef DECL_IOCTL_0 */

/* Declaration style */
/* #undef DECL_IPC_0 */

/* Declaration style */
/* #undef DECL_MEMMOVE_0 */

/* Declaration style */
/* #undef DECL_MKSTEMP_0 */

/* Declaration style */
/* #undef DECL_MKTEMP_0 */

/* Declaration style */
/* #undef DECL_NLIST_0 */

/* Declaration style */
/* #undef DECL_PLOCK_0 */

/* Declaration style */
/* #undef DECL_RENAME_0 */

/* Declaration style */
/* #undef DECL_SELECT_0 */

/* Declaration style */
/* #undef DECL_SETITIMER_0 */

/* Declaration style */
/* #undef DECL_SETPRIORITY_0 */

/* Declaration style */
/* #undef DECL_SETPRIORITY_1 */

/* Declaration style */
/* #undef DECL_SIGVEC_0 */

/* Declaration style */
/* #undef DECL_STDIO_0 */

/* Declaration style */
/* #undef DECL_STIME_0 */

/* Declaration style */
/* #undef DECL_STIME_1 */

/* Declaration style */
/* #undef DECL_STRERROR_0 */

/* Declaration style */
/* #undef DECL_STRTOL_0 */

/* Declare syscall()? */
/* #undef DECL_SYSCALL */

/* Declaration style */
/* #undef DECL_SYSLOG_0 */

/* Declaration style */
/* #undef DECL_TIMEOFDAY_0 */

/* Declaration style */
/* #undef DECL_TIME_0 */

/* Declaration style */
/* #undef DECL_TOLOWER_0 */

/* Declaration style */
/* #undef DECL_TOUPPER_0 */

/* What is the fallback value for HZ? */
#define DEFAULT_HZ 100

/* synch TODR hourly? */
/* #undef DOSYNCTODR */

/* The number of minutes in a DST adjustment */
#define DSTMINUTES 60

/* fopen(3) accepts a 'b' in the mode flag */
#define FOPEN_BINARY_FLAG ""

/* fopen(3) accepts a 't' in the mode flag */
#define FOPEN_TEXT_FLAG ""

/* force ntpdate to step the clock if !defined(STEP_SLEW) ? */
/* #undef FORCE_NTPDATE_STEP */

/* What is getsockname()'s socklen type? */
#define GETSOCKNAME_SOCKLEN_TYPE socklen_t

/* Do we have a routing socket (struct rt_msghdr)? */
/* #undef HAS_ROUTING_SOCKET */

/* Define to 1 if you have the <arpa/nameser.h> header file. */
#define HAVE_ARPA_NAMESER_H 1

/* Do we have audio support? */
#define HAVE_AUDIO 

/* Define to 1 if you have the <bstring.h> header file. */
/* #undef HAVE_BSTRING_H */

/* Define to 1 if you have the `canonicalize_file_name' function. */
#define HAVE_CANONICALIZE_FILE_NAME 1

/* Do we have the CIOGETEV ioctl (SunOS, Linux)? */
/* #undef HAVE_CIOGETEV */

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the `clock_settime' function. */
/* #undef HAVE_CLOCK_SETTIME */

/* Define to 1 if you have the `daemon' function. */
#define HAVE_DAEMON 1

/* Define this if /dev/zero is readable device */
#define HAVE_DEV_ZERO 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Use Rendezvous/DNS-SD registration */
/* #undef HAVE_DNSREGISTRATION */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* [Can], [we], [drop], [root], [privileges?] */
/* #undef HAVE_DROPROOT */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the `EVP_md2' function. */
/* #undef HAVE_EVP_MD2 */

/* Define to 1 if you have the `EVP_mdc2' function. */
/* #undef HAVE_EVP_MDC2 */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `finite' function. */
#define HAVE_FINITE 1

/* Define to 1 if you have the `getbootfile' function. */
/* #undef HAVE_GETBOOTFILE */

/* Define to 1 if you have the `getclock' function. */
/* #undef HAVE_GETCLOCK */

/* Define to 1 if you have the `getdtablesize' function. */
#define HAVE_GETDTABLESIZE 1

/* Define to 1 if you have the `getifaddrs' function. */
/* #undef HAVE_GETIFADDRS */

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the `getuid' function. */
#define HAVE_GETUID 1

/* Define to 1 if you have the `hstrerror' function. */
#define HAVE_HSTRERROR 1

/* Obvious... */
/* #undef HAVE_HZ_IN_STRUCT_CLOCKINFO */

/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef HAVE_IEEEFP_H */

/* have iflist_sysctl? */
/* #undef HAVE_IFLIST_SYSCTL */

/* inline keyword or macro available */
#define HAVE_INLINE 1

/* Define to 1 if the system has the type `int16_t'. */
#define HAVE_INT16_T 1

/* Define to 1 if the system has the type `int32_t'. */
#define HAVE_INT32_T 1

/* Define to 1 if the system has the type `int8_t'. */
#define HAVE_INT8_T 1

/* Define to 1 if the system has the type `intptr_t'. */
#define HAVE_INTPTR_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Do we have IPTOS support? */
#define HAVE_IPTOS_SUPPORT 1

/* Define to 1 if you have the `isfinite' function. */
/* #undef HAVE_ISFINITE */

/* Define to 1 if you have the `kvm_open' function. */
/* #undef HAVE_KVM_OPEN */

/* Define to 1 if you have the `K_open' function. */
/* #undef HAVE_K_OPEN */

/* Define to 1 if you have the `advapi32' library (-ladvapi32). */
/* #undef HAVE_LIBADVAPI32 */

/* Do we have the curses library? */
/* #undef HAVE_LIBCURSES */

/* Do we have the edit library? */
/* #undef HAVE_LIBEDIT */

/* Define to 1 if you have the `elf' library (-lelf). */
/* #undef HAVE_LIBELF */

/* Define to 1 if you have the `gen' library (-lgen). */
/* #undef HAVE_LIBGEN */

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if you have the `kvm' library (-lkvm). */
/* #undef HAVE_LIBKVM */

/* Define to 1 if you have the `ld' library (-lld). */
/* #undef HAVE_LIBLD */

/* Define to 1 if you have the `mld' library (-lmld). */
/* #undef HAVE_LIBMLD */

/* Define to 1 if you have the `posix4' library (-lposix4). */
/* #undef HAVE_LIBPOSIX4 */

/* Define to 1 if you have the `readline' library (-lreadline). */
/* #undef HAVE_LIBREADLINE */

/* Define to 1 if you have the `rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* Define to 1 if you have the <libscf.h> header file. */
/* #undef HAVE_LIBSCF_H */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* [Do], [we], [have], [Linux], [capabilities?] */
/* #undef HAVE_LINUX_CAPABILITIES */

/* Define to 1 if you have the <machine/inline.h> header file. */
/* #undef HAVE_MACHINE_INLINE_H */

/* Define to 1 if you have the <machine/soundcard.h> header file. */
/* #undef HAVE_MACHINE_SOUNDCARD_H */

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the `MD5Init' function. */
/* #undef HAVE_MD5INIT */

/* Define to 1 if you have the <md5.h> header file. */
/* #undef HAVE_MD5_H */

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the `memlk' function. */
/* #undef HAVE_MEMLK */

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the `mktime' function. */
#define HAVE_MKTIME 1

/* Define to 1 if you have the `mlockall' function. */
/* #undef HAVE_MLOCKALL */

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/in_system.h> header file. */
/* #undef HAVE_NETINET_IN_SYSTEM_H */

/* Define to 1 if you have the <netinet/in_systm.h> header file. */
#define HAVE_NETINET_IN_SYSTM_H 1

/* Define to 1 if you have the <netinet/ip.h> header file. */
#define HAVE_NETINET_IP_H 1

/* NetInfo support? */
/* #undef HAVE_NETINFO */

/* Define to 1 if you have the <netinfo/ni.h> header file. */
/* #undef HAVE_NETINFO_NI_H */

/* Define to 1 if you have the <net/if6.h> header file. */
/* #undef HAVE_NET_IF6_H */

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the <net/route.h> header file. */
#define HAVE_NET_ROUTE_H 1

/* Define to 1 if you have the `nice' function. */
#define HAVE_NICE 1

/* Define to 1 if you have the `nlist' function. */
/* #undef HAVE_NLIST */

/* Define to 1 if you have the `ntp_adjtime' function. */
#define HAVE_NTP_ADJTIME 1

/* Define to 1 if you have the `ntp_gettime' function. */
#define HAVE_NTP_GETTIME 1

/* Do we want support for Samba's signing daemon? */
/* #undef HAVE_NTP_SIGND */

/* Define this if pathfind(3) works */
/* #undef HAVE_PATHFIND */

/* Define to 1 if you have the `plock' function. */
/* #undef HAVE_PLOCK */

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Do we have the PPS API per the Draft RFC? */
/* #undef HAVE_PPSAPI */

/* Are function prototypes OK? */
#define HAVE_PROTOTYPES 1

/* Define to 1 if you have the `pututline' function. */
#define HAVE_PUTUTLINE 1

/* Define to 1 if you have the `pututxline' function. */
#define HAVE_PUTUTXLINE 1

/* Define to 1 if you have the <readline/history.h> header file. */
/* #undef HAVE_READLINE_HISTORY_H */

/* Define to 1 if you have the <readline/readline.h> header file. */
/* #undef HAVE_READLINE_READLINE_H */

/* Define to 1 if you have the `readlink' function. */
#define HAVE_READLINK 1

/* Define this if we have a functional realpath(3C) */
/* #undef HAVE_REALPATH */

/* Define to 1 if you have the `recvmsg' function. */
#define HAVE_RECVMSG 1

/* Define to 1 if you have the <resolv.h> header file. */
#define HAVE_RESOLV_H 1

/* Define to 1 if you have the `rtprio' function. */
/* #undef HAVE_RTPRIO */

/* Should be obvious... */
/* #undef HAVE_SA_LEN_IN_STRUCT_SOCKADDR */

/* Obvious... */
#define HAVE_SA_SIGACTION_IN_STRUCT_SIGACTION 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the `sched_setscheduler' function. */
#define HAVE_SCHED_SETSCHEDULER 1

/* Define to 1 if you have the <setjmp.h> header file. */
#define HAVE_SETJMP_H 1

/* Define to 1 if you have the `setlinebuf' function. */
#define HAVE_SETLINEBUF 1

/* Define to 1 if you have the `setpgid' function. */
#define HAVE_SETPGID 1

/* define if setpgrp takes 0 arguments */
#define HAVE_SETPGRP_0 1

/* Define to 1 if you have the `setpriority' function. */
#define HAVE_SETPRIORITY 1

/* Define to 1 if you have the `setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define to 1 if you have the `setsid' function. */
#define HAVE_SETSID 1

/* Define to 1 if you have the `settimeofday' function. */
#define HAVE_SETTIMEOFDAY 1

/* Define to 1 if you have the `setvbuf' function. */
#define HAVE_SETVBUF 1

/* Define to 1 if you have the <sgtty.h> header file. */
#define HAVE_SGTTY_H 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Can we use SIGIO for tcp and udp IO? */
/* #undef HAVE_SIGNALED_IO */

/* Define to 1 if you have the `sigset' function. */
#define HAVE_SIGSET 1

/* Define to 1 if you have the `sigsuspend' function. */
#define HAVE_SIGSUSPEND 1

/* Define to 1 if you have the `sigvec' function. */
#define HAVE_SIGVEC 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* [Are], [Solaris], [privileges], [available?] */
/* #undef HAVE_SOLARIS_PRIVS */

/* Does struct sockaddr_storage have ss_family? */
#define HAVE_SS_FAMILY_IN_SS 1

/* Does struct sockaddr_storage have ss_len? */
/* #undef HAVE_SS_LEN_IN_SS */

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stime' function. */
#define HAVE_STIME 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define this if strftime() works */
/* #undef HAVE_STRFTIME */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Do we have struct ntptimeval? */
#define HAVE_STRUCT_NTPTIMEVAL 1

/* Define to 1 if `time.tv_nsec' is member of `struct ntptimeval'. */
/* #undef HAVE_STRUCT_NTPTIMEVAL_TIME_TV_NSEC */

/* Does a system header define struct ppsclockev? */
/* #undef HAVE_STRUCT_PPSCLOCKEV */

/* Do we have struct snd_size? */
/* #undef HAVE_STRUCT_SND_SIZE */

/* Does a system header define struct sockaddr_storage? */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Do we have struct timespec? */
#define HAVE_STRUCT_TIMESPEC 1

/* Define to 1 if you have the <sun/audioio.h> header file. */
/* #undef HAVE_SUN_AUDIOIO_H */

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the `sysctl' function. */
#define HAVE_SYSCTL 1

/* Define to 1 if you have the <sysexits.h> header file. */
#define HAVE_SYSEXITS_H 1

/* Define to 1 if you have the <sys/audioio.h> header file. */
/* #undef HAVE_SYS_AUDIOIO_H */

/* Define to 1 if you have the <sys/capability.h> header file. */
/* #undef HAVE_SYS_CAPABILITY_H */

/* Define to 1 if you have the <sys/clkdefs.h> header file. */
/* #undef HAVE_SYS_CLKDEFS_H */

/* Define to 1 if you have the <sys/clockctl.h> header file. */
/* #undef HAVE_SYS_CLOCKCTL_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/i8253.h> header file. */
/* #undef HAVE_SYS_I8253_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/ipc.h> header file. */
#define HAVE_SYS_IPC_H 1

/* Define to 1 if you have the <sys/limits.h> header file. */
/* #undef HAVE_SYS_LIMITS_H */

/* Define to 1 if you have the <sys/lock.h> header file. */
/* #undef HAVE_SYS_LOCK_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/modem.h> header file. */
/* #undef HAVE_SYS_MODEM_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/pcl720.h> header file. */
/* #undef HAVE_SYS_PCL720_H */

/* Define to 1 if you have the <sys/poll.h> header file. */
#define HAVE_SYS_POLL_H 1

/* Define to 1 if you have the <sys/ppsclock.h> header file. */
/* #undef HAVE_SYS_PPSCLOCK_H */

/* Define to 1 if you have the <sys/ppstime.h> header file. */
/* #undef HAVE_SYS_PPSTIME_H */

/* Define to 1 if you have the <sys/prctl.h> header file. */
#define HAVE_SYS_PRCTL_H 1

/* Define to 1 if you have the <sys/procset.h> header file. */
/* #undef HAVE_SYS_PROCSET_H */

/* Define to 1 if you have the <sys/proc.h> header file. */
/* #undef HAVE_SYS_PROC_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/sched.h> header file. */
/* #undef HAVE_SYS_SCHED_H */

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/shm.h> header file. */
#define HAVE_SYS_SHM_H 1

/* Define to 1 if you have the <sys/signal.h> header file. */
#define HAVE_SYS_SIGNAL_H 1

/* Define to 1 if you have the <sys/sio.h> header file. */
/* #undef HAVE_SYS_SIO_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/soundcard.h> header file. */
#define HAVE_SYS_SOUNDCARD_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/stream.h> header file. */
/* #undef HAVE_SYS_STREAM_H */

/* Define to 1 if you have the <sys/stropts.h> header file. */
#define HAVE_SYS_STROPTS_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/syssgi.h> header file. */
/* #undef HAVE_SYS_SYSSGI_H */

/* Define to 1 if you have the <sys/systune.h> header file. */
/* #undef HAVE_SYS_SYSTUNE_H */

/* Define to 1 if you have the <sys/termios.h> header file. */
#define HAVE_SYS_TERMIOS_H 1

/* Define to 1 if you have the <sys/timepps.h> header file. */
/* #undef HAVE_SYS_TIMEPPS_H */

/* Define to 1 if you have the <sys/timers.h> header file. */
/* #undef HAVE_SYS_TIMERS_H */

/* Define to 1 if you have the <sys/timex.h> header file. */
#define HAVE_SYS_TIMEX_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/tpro.h> header file. */
/* #undef HAVE_SYS_TPRO_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Use sys/uio.h for struct iovec help */
/* #undef HAVE_SYS_UIO_H */

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if the system has the type `s_char'. */
/* #undef HAVE_S_CHAR */

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <termio.h> header file. */
#define HAVE_TERMIO_H 1

/* Obvious... */
/* #undef HAVE_TICKADJ_IN_STRUCT_CLOCKINFO */

/* Define to 1 if you have the `timegm' function. */
#define HAVE_TIMEGM 1

/* Define to 1 if you have the <timepps.h> header file. */
/* #undef HAVE_TIMEPPS_H */

/* Define to 1 if you have the `timer_create' function. */
/* #undef HAVE_TIMER_CREATE */

/* Define to 1 if you have the `timer_settime' function. */
/* #undef HAVE_TIMER_SETTIME */

/* Define to 1 if you have the <timex.h> header file. */
/* #undef HAVE_TIMEX_H */

/* Do we have the TIOCGPPSEV ioctl (Solaris)? */
/* #undef HAVE_TIOCGPPSEV */

/* Do we have the TIOCSPPS ioctl (Solaris)? */
/* #undef HAVE_TIOCSPPS */

/* Do we have the TIO serial stuff? */
/* #undef HAVE_TIO_SERIAL_STUFF */

/* Does u_int64_t exist? */
#define HAVE_TYPE_U_INT64_T 1

/* Does u_int8_t exist? */
#define HAVE_TYPE_U_INT8_T 1

/* Define to 1 if the system has the type `uint16_t'. */
#define HAVE_UINT16_T 1

/* Define to 1 if the system has the type `uint32_t'. */
#define HAVE_UINT32_T 1

/* Define to 1 if the system has the type `uint8_t'. */
#define HAVE_UINT8_T 1

/* Define to 1 if the system has the type `uintptr_t'. */
#define HAVE_UINTPTR_T 1

/* Define to 1 if the system has the type `uint_t'. */
/* #undef HAVE_UINT_T */

/* Define to 1 if you have the `umask' function. */
#define HAVE_UMASK 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `updwtmp' function. */
#define HAVE_UPDWTMP 1

/* Define to 1 if you have the `updwtmpx' function. */
#define HAVE_UPDWTMPX 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if you have the <utmpx.h> header file. */
#define HAVE_UTMPX_H 1

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Define to 1 if you have the <values.h> header file. */
/* #undef HAVE_VALUES_H */

/* Define to 1 if you have the <varargs.h> header file. */
/* #undef HAVE_VARARGS_H */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `vsprintf' function. */
#define HAVE_VSPRINTF 1

/* Define to 1 if you have the </sys/sync/queue.h> header file. */
/* #undef HAVE__SYS_SYNC_QUEUE_H */

/* Define to 1 if you have the </sys/sync/sema.h> header file. */
/* #undef HAVE__SYS_SYNC_SEMA_H */

/* Define to 1 if you have the `__adjtimex' function. */
#define HAVE___ADJTIMEX 1

/* Define to 1 if you have the `__ntp_gettime' function. */
/* #undef HAVE___NTP_GETTIME */

/* Does struct sockaddr_storage have __ss_family? */
/* #undef HAVE___SS_FAMILY_IN_SS */

/* Does struct sockaddr_storage have __ss_len? */
/* #undef HAVE___SS_LEN_IN_SS */

/* [Retry], [queries], [on], [_any_], [DNS], [error?] */
/* #undef IGNORE_DNS_ERRORS */

/* Should we use the IRIG sawtooth filter? */
/* #undef IRIG_SUCKS */

/* Do we need to fix in6isaddr? */
/* #undef ISC_PLATFORM_FIXIN6ISADDR */

/* ISC: do we have if_nametoindex()? */
#define ISC_PLATFORM_HAVEIFNAMETOINDEX 1

/* have struct if_laddrconf? */
/* #undef ISC_PLATFORM_HAVEIF_LADDRCONF */

/* have struct if_laddrreq? */
/* #undef ISC_PLATFORM_HAVEIF_LADDRREQ */

/* have struct in6_pktinfo? */
/* #undef ISC_PLATFORM_HAVEIN6PKTINFO */

/* have IPv6? */
#define ISC_PLATFORM_HAVEIPV6 

/* ISC: struct sockaddr as sa_len? */
/* #undef ISC_PLATFORM_HAVESALEN */

/* have sin6_scope_id? */
#define ISC_PLATFORM_HAVESCOPEID 

/* ISC: provide inet_aton() */
/* #undef ISC_PLATFORM_NEEDATON */

/* missing in6addr_any? */
/* #undef ISC_PLATFORM_NEEDIN6ADDRANY */

/* Do we need netinet6/in6.h? */
/* #undef ISC_PLATFORM_NEEDNETINET6IN6H */

/* ISC: provide inet_ntop() */
/* #undef ISC_PLATFORM_NEEDNTOP */

/* Do we need our own in_port_t? */
/* #undef ISC_PLATFORM_NEEDPORTT */

/* ISC: provide inet_pton() */
/* #undef ISC_PLATFORM_NEEDPTON */

/* Does the kernel have an FLL bug? */
/* #undef KERNEL_FLL_BUG */

/* Does the kernel support precision time discipline? */
#define KERNEL_PLL 1

/* What is (probably) the name of DOSYNCTODR in the kernel? */
#define K_DOSYNCTODR_NAME "_dosynctodr"

/* What is (probably) the name of NOPRINTF in the kernel? */
#define K_NOPRINTF_NAME "_noprintf"

/* What is the name of TICKADJ in the kernel? */
#define K_TICKADJ_NAME "_tickadj"

/* What is the name of TICK in the kernel? */
#define K_TICK_NAME "_tick"

/* Should we align with the NIST lockclock scheme? */
/* #undef LOCKCLOCK */

/* Does the kernel support multicasting IP? */
#define MCAST 1

/* Should we recommend a minimum value for tickadj? */
/* #undef MIN_REC_TICKADJ */

/* Do we need HPUX adjtime() library support? */
/* #undef NEED_HPUX_ADJTIME */

/* Do we want the HPUX FindConfig()? */
/* #undef NEED_HPUX_FINDCONFIG */

/* Do we need the qnx adjtime call? */
/* #undef NEED_QNX_ADJTIME */

/* Do we need extra room for SO_RCVBUF? (HPUX <8) */
/* #undef NEED_RCVBUF_SLOP */

/* Do we need an s_char typedef? */
#define NEED_S_CHAR_TYPEDEF 1

/* Might nlist() values require an extra level of indirection (AIX)? */
/* #undef NLIST_EXTRA_INDIRECTION */

/* does struct nlist use a name union? */
/* #undef NLIST_NAME_UNION */

/* nlist stuff */
/* #undef NLIST_STRUCT */

/* Should we NOT read /dev/kmem? */
#define NOKMEM 1

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define this if optional arguments are disallowed */
/* #undef NO_OPTIONAL_OPT_ARGS */

/* Should we avoid #warning on option name collisions? */
/* #undef NO_OPTION_NAME_WARNINGS */

/* Is there a problem using PARENB and IGNPAR (IRIX)? */
/* #undef NO_PARENB_IGNPAR */

/* Default location of crypto key info */
#define NTP_KEYSDIR "/home/zhangjiali/ntp/etc"

/* Path to sign daemon rendezvous socket */
/* #undef NTP_SIGND_PATH */

/* Do we have ntp_{adj,get}time in libc? */
#define NTP_SYSCALLS_LIBC 1

/* Do we have ntp_{adj,get}time in the kernel? */
/* #undef NTP_SYSCALLS_STD */

/* Do we have support for SHMEM_STATUS? */
#define ONCORE_SHMEM_STATUS 1

/* Use OpenSSL? */
/* #undef OPENSSL */

/* Should we open the broadcast socket? */
#define OPEN_BCAST_SOCKET 1

/* need to recreate sockets on changed routing? */
/* #undef OS_MISSES_SPECIFIC_ROUTE_UPDATES */

/* wildcard socket needs to set REUSEADDR when binding to interface addresses
   */
#define OS_NEEDS_REUSEADDR_FOR_IFADDRBIND 1

/* Do we need to override the system's idea of HZ? */
/* #undef OVERRIDE_HZ */

/* Name of package */
#define PACKAGE "ntp"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "ntp"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "ntp 4.2.4p7"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "ntp"

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.2.4p7"

/* Do we have the ppsclock streams module? */
/* #undef PPS */

/* PPS auxiliary interface for ATOM? */
#define PPS_SAMPLE 1

/* PARSE kernel PLL PPS support */
/* #undef PPS_SYNC */

/* Preset a value for 'tick'? */
#define PRESET_TICK txc.tick

/* Preset a value for 'tickadj'? */
#define PRESET_TICKADJ 500/hz

/* Define to 1 if the C compiler supports function prototypes. */
#define PROTOTYPES 1

/* Does qsort expect to work on "void *" stuff? */
#define QSORT_USES_VOID_P 1

/* Should we not IGNPAR (Linux)? */
#define RAWDCF_NO_IGNPAR 1

/* Basic refclock support? */
#define REFCLOCK 1

/* name of regex header file */
#define REGEX_HEADER <regex.h>

/* Do we want the ReliantUNIX clock hacks? */
/* #undef RELIANTUNIX_CLOCK */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Do we want the SCO clock hacks? */
/* #undef SCO5_CLOCK */

/* The size of a `char*', as computed by sizeof. */
#define SIZEOF_CHARP 4

/* The size of a `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of a `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of a `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of a `signed char', as computed by sizeof. */
#define SIZEOF_SIGNED_CHAR 1

/* The size of a `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 4

/* Does SIOCGIFCONF return size in the buffer? */
/* #undef SIZE_RETURNED_IN_BUFFER */

/* Slew always? */
/* #undef SLEWALWAYS */

/* *s*printf() functions are char* */
/* #undef SPRINTF_CHAR */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Step, then slew the clock? */
/* #undef STEP_SLEW */

/* canonical system (cpu-vendor-os) of where we should run */
#define STR_SYSTEM "arm-unknown-linux-gnu"

/* Buggy syscall() (Solaris2.4)? */
/* #undef SYSCALL_BUG */

/* Does Xettimeofday take 1 arg? */
/* #undef SYSV_TIMEOFDAY */

/* Do we need to #define _SVID3 when we #include <termios.h>? */
/* #undef TERMIOS_NEEDS__SVID3 */

/* Is K_TICKADJ_NAME in nanoseconds? */
/* #undef TICKADJ_NANO */

/* Is K_TICK_NAME in nanoseconds? */
/* #undef TICK_NANO */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Do we have the tty_clk line discipline/streams module? */
/* #undef TTYCLK */

/* Provide a typedef for uintptr_t? */
#ifndef HAVE_UINTPTR_T
typedef unsigned int	uintptr_t;
#define HAVE_UINTPTR_T 1
#endif

/* What type to use for setsockopt */
#define TYPEOF_IP_MULTICAST_LOOP u_int

/* Do we set process groups with -pid? */
#define UDP_BACKWARDS_SETOWN 1

/* How do we create unsigned long constants? */
#define ULONG_CONST(a) a ## UL

/* Must we have a CTTY for fsetown? */
/* #undef USE_FSETOWNCTTY */

/* Can we use SIGPOLL for tty IO? */
/* #undef USE_TTY_SIGPOLL */

/* Can we use SIGPOLL for UDP? */
/* #undef USE_UDP_SIGPOLL */

/* Version number of package */
#define VERSION "4.2.4p7"

/* configure --enable-ipv6 */
#define WANT_IPV6 

/* Do we want the windows symmetric client hack? */
/* #undef WINTIME */

/* Define this if a working libregex can be found */
/* #undef WITH_LIBREGEX */

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Handle ss_family */
#if !defined(HAVE_SS_FAMILY_IN_SS) && defined(HAVE___SS_FAMILY_IN_SS)
# define ss_family __ss_family
#endif /* !defined(HAVE_SS_FAMILY_IN_SS) && defined(HAVE_SA_FAMILY_IN_SS) */

/* Handle ss_len */
#if !defined(HAVE_SS_LEN_IN_SS) && defined(HAVE___SS_LEN_IN_SS)
# define ss_len __ss_len
#endif /* !defined(HAVE_SS_LEN_IN_SS) && defined(HAVE_SA_LEN_IN_SS) */

/* Define to 1 if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error message.  */
#ifndef _ALL_SOURCE
/* # undef _ALL_SOURCE */
#endif

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
/* # undef __CHAR_UNSIGNED__ */
#endif

/* Define like PROTOTYPES; this can be used by system headers. */
#define __PROTOTYPES 1

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `long' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `long' if <sys/types.h> does not define. */
/* #undef time_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Alternate uintptr_t for systems without it. */
/* #undef uintptr_t */

/* Does the compiler like "volatile"? */
/* #undef volatile */
