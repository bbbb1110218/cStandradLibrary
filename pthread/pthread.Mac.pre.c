# 1 "pthread.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 418 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "pthread.c" 2
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 1 3 4
# 55 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_types.h" 1 3 4
# 27 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_types.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 1 3 4
# 32 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 1 3 4
# 678 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 679 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 2 3 4
# 744 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 745 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 2 3 4
# 33 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/_types.h" 1 3 4
# 15 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 48 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 35 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 2 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 2 3 4
# 55 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];

# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 2 3 4
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_types.h" 2 3 4
# 40 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 56 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/sched.h" 1 3 4
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/sched.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h" 1 3 4
# 33 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h" 3 4
#pragma clang assume_nonnull begin
# 33 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h" 3 4
#pragma clang assume_nonnull end
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/sched.h" 2 3 4






struct sched_param { int sched_priority; char __opaque[4]; };




extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);
# 57 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 1 3 4
# 68 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
# 172 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 173 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/Availability.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 1 3 4
# 176 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h" 1 3 4
# 177 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 2 3 4
# 174 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/Availability.h" 2 3 4
# 69 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_clock_t.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/types.h" 1 3 4
# 37 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/types.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 1 3 4
# 55 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 56 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 57 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 58 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 59 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4

# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h" 3 4
typedef unsigned char u_int8_t;
# 61 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h" 3 4
typedef unsigned short u_int16_t;
# 62 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h" 3 4
typedef unsigned int u_int32_t;
# 63 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h" 3 4
typedef unsigned long long u_int64_t;
# 64 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4


typedef int64_t register_t;




# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/types.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 72 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 73 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4




typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;
# 104 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/arm/types.h" 3 4
typedef u_int64_t syscall_arg_t;
# 38 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/types.h" 2 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_clock_t.h" 2 3 4
typedef __darwin_clock_t clock_t;
# 70 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 71 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 72 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 73 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 74 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 2 3 4

struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 98 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;


char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * restrict, size_t, const char * restrict, const struct tm * restrict) __asm("_" "strftime" );
char *strptime(const char * restrict, const char * restrict, struct tm * restrict) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * restrict, char * restrict);
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * restrict, struct tm * restrict);
struct tm *localtime_r(const time_t * restrict, struct tm * restrict);


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp) __asm("_" "nanosleep" );
# 153 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 3 4
typedef enum {
_CLOCK_REALTIME __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 0,

_CLOCK_MONOTONIC __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 6,


_CLOCK_MONOTONIC_RAW __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 4,

_CLOCK_MONOTONIC_RAW_APPROX __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 5,

_CLOCK_UPTIME_RAW __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 8,

_CLOCK_UPTIME_RAW_APPROX __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 9,


_CLOCK_PROCESS_CPUTIME_ID __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 12,

_CLOCK_THREAD_CPUTIME_ID __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 16

} clockid_t;

__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
int clock_getres(clockid_t __clock_id, struct timespec *__res);

__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
int clock_gettime(clockid_t __clock_id, struct timespec *__tp);


__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
__uint64_t clock_gettime_nsec_np(clockid_t __clock_id);


__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,unavailable)))
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
int clock_settime(clockid_t __clock_id, const struct timespec *__tp);
# 198 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 3 4
__attribute__((availability(macos,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)))
int timespec_get(struct timespec *ts, int base);
# 58 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4

# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 60 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 3 4
typedef __darwin_pthread_cond_t pthread_cond_t;
# 61 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 3 4
typedef __darwin_pthread_condattr_t pthread_condattr_t;
# 62 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 3 4
typedef __darwin_pthread_key_t pthread_key_t;
# 63 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 3 4
typedef __darwin_pthread_mutex_t pthread_mutex_t;
# 64 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 3 4
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
# 65 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 3 4
typedef __darwin_pthread_once_t pthread_once_t;
# 66 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 3 4
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
# 67 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 3 4
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
# 68 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_t.h" 3 4
typedef __darwin_pthread_t pthread_t;
# 69 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4

# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/qos.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/qos.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/qos.h" 1 3 4
# 130 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/qos.h" 3 4
enum { QOS_CLASS_USER_INTERACTIVE __attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0))) = 0x21, QOS_CLASS_USER_INITIATED __attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0))) = 0x19, QOS_CLASS_DEFAULT __attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0))) = 0x15, QOS_CLASS_UTILITY __attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0))) = 0x11, QOS_CLASS_BACKGROUND __attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0))) = 0x09, QOS_CLASS_UNSPECIFIED __attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0))) = 0x00, }; typedef unsigned int qos_class_t;
# 170 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
qos_class_t
qos_class_self(void);
# 192 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
qos_class_t
qos_class_main(void);
# 35 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/qos.h" 2 3 4




#pragma clang assume_nonnull begin
# 81 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
int
pthread_attr_set_qos_class_np(pthread_attr_t *__attr,
  qos_class_t __qos_class, int __relative_priority);
# 112 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
int
pthread_attr_get_qos_class_np(pthread_attr_t * restrict __attr,
  qos_class_t * _Nullable restrict __qos_class,
  int * _Nullable restrict __relative_priority);
# 153 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
int
pthread_set_qos_class_self_np(qos_class_t __qos_class,
  int __relative_priority);
# 184 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
int
pthread_get_qos_class_np(pthread_t __pthread,
  qos_class_t * _Nullable restrict __qos_class,
  int * _Nullable restrict __relative_priority);
# 211 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/qos.h" 3 4
typedef struct pthread_override_s* pthread_override_t;
# 263 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
pthread_override_t
pthread_override_qos_class_start_np(pthread_t __pthread,
  qos_class_t __qos_class, int __relative_priority);
# 291 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
int
pthread_override_qos_class_end_np(pthread_override_t __override);
# 293 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread/qos.h" 3 4
#pragma clang assume_nonnull end
# 71 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4



# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_mach_port_t.h" 1 3 4
# 50 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_mach_port_t.h" 3 4
typedef __darwin_mach_port_t mach_port_t;
# 75 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 76 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 2 3 4
# 103 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 3 4
#pragma clang assume_nonnull begin
# 225 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 3 4
__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_atfork(void (* _Nullable)(void), void (* _Nullable)(void),
  void (* _Nullable)(void));

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_destroy(pthread_attr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getdetachstate(const pthread_attr_t *, int *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getguardsize(const pthread_attr_t * restrict, size_t * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getinheritsched(const pthread_attr_t * restrict, int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getschedparam(const pthread_attr_t * restrict,
  struct sched_param * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getschedpolicy(const pthread_attr_t * restrict, int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getscope(const pthread_attr_t * restrict, int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getstack(const pthread_attr_t * restrict,
  void * _Nullable * _Nonnull restrict, size_t * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getstackaddr(const pthread_attr_t * restrict,
  void * _Nullable * _Nonnull restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getstacksize(const pthread_attr_t * restrict, size_t * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_init(pthread_attr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setdetachstate(pthread_attr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setguardsize(pthread_attr_t *, size_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setinheritsched(pthread_attr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setschedparam(pthread_attr_t * restrict,
  const struct sched_param * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setschedpolicy(pthread_attr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setscope(pthread_attr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setstack(pthread_attr_t *, void *, size_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setstackaddr(pthread_attr_t *, void *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setstacksize(pthread_attr_t *, size_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_cancel(pthread_t) __asm("_" "pthread_cancel" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_cond_broadcast(pthread_cond_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_cond_destroy(pthread_cond_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_cond_init(
  pthread_cond_t * restrict,
  const pthread_condattr_t * _Nullable restrict)
  __asm("_" "pthread_cond_init" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_cond_signal(pthread_cond_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use an asynchronous wait instead of a synchronous wait" "\")")))
int pthread_cond_timedwait(
  pthread_cond_t * restrict, pthread_mutex_t * restrict,
  const struct timespec * _Nullable restrict)
  __asm("_" "pthread_cond_timedwait" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use an asynchronous wait instead of a synchronous wait" "\")")))
int pthread_cond_wait(pthread_cond_t * restrict,
  pthread_mutex_t * restrict) __asm("_" "pthread_cond_wait" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_condattr_destroy(pthread_condattr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_condattr_init(pthread_condattr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_condattr_getpshared(const pthread_condattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_condattr_setpshared(pthread_condattr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_create(pthread_t _Nullable * _Nonnull restrict,
  const pthread_attr_t * _Nullable restrict,
  void * _Nullable (* _Nonnull)(void * _Nullable),
  void * _Nullable restrict);






__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_detach(pthread_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_equal(pthread_t _Nullable, pthread_t _Nullable);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Thread lifecycle is owned by Swift Concurrency runtime" "\")")))
void pthread_exit(void * _Nullable) __attribute__((__noreturn__));

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_getconcurrency(void);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_getschedparam(pthread_t , int * _Nullable restrict,
  struct sched_param * _Nullable restrict);

__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use Task Local Values instead" "\")")))
__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
void* _Nullable pthread_getspecific(pthread_key_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use an asynchronous wait instead of a synchronous wait" "\")")))
int pthread_join(pthread_t , void * _Nullable * _Nullable)
  __asm("_" "pthread_join" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_key_create(pthread_key_t *, void (* _Nullable)(void *));

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_key_delete(pthread_key_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutex_destroy(pthread_mutex_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutex_getprioceiling(const pthread_mutex_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutex_init(pthread_mutex_t * restrict,
  const pthread_mutexattr_t * _Nullable restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use OSAllocatedUnfairLock's withLock or NSLock for async-safe scoped locking" "\")")))
int pthread_mutex_lock(pthread_mutex_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutex_setprioceiling(pthread_mutex_t * restrict, int,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use OSAllocatedUnfairLock's withLockIfAvailable or NSLock for async-safe scoped locking" "\")")))
int pthread_mutex_trylock(pthread_mutex_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use OSAllocatedUnfairLock's withLock or NSLock for async-safe scoped locking" "\")")))
int pthread_mutex_unlock(pthread_mutex_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_destroy(pthread_mutexattr_t *) __asm("_" "pthread_mutexattr_destroy" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_getprotocol(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_getpshared(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_gettype(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.13.4))) __attribute__((availability(ios,introduced=11.3))) __attribute__((availability(watchos,introduced=4.3))) __attribute__((availability(tvos,introduced=11.3)))
int pthread_mutexattr_getpolicy_np(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_init(pthread_mutexattr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_setpshared(pthread_mutexattr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_settype(pthread_mutexattr_t *, int);

__attribute__((availability(macos,introduced=10.7))) __attribute__((availability(ios,introduced=5.0)))
int pthread_mutexattr_setpolicy_np(pthread_mutexattr_t *, int);

__attribute__((availability(swift,unavailable,message="Use lazily initialized globals instead")))
__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_once(pthread_once_t *, void (* _Nonnull)(void));

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_rwlock_destroy(pthread_rwlock_t * ) __asm("_" "pthread_rwlock_destroy" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_rwlock_init(pthread_rwlock_t * restrict,
  const pthread_rwlockattr_t * _Nullable restrict)
  __asm("_" "pthread_rwlock_init" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use async-safe scoped locking instead" "\")")))
int pthread_rwlock_rdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_rdlock" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use async-safe scoped locking instead" "\")")))
int pthread_rwlock_tryrdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_tryrdlock" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use async-safe scoped locking instead" "\")")))
int pthread_rwlock_trywrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_trywrlock" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use async-safe scoped locking instead" "\")")))
int pthread_rwlock_wrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_wrlock" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use async-safe scoped locking instead" "\")")))
int pthread_rwlock_unlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_unlock" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_rwlockattr_destroy(pthread_rwlockattr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_rwlockattr_init(pthread_rwlockattr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
pthread_t pthread_self(void);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use Task cancellation instead" "\")")))
int pthread_setcancelstate(int , int * _Nullable)
  __asm("_" "pthread_setcancelstate" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use Task cancellation instead" "\")")))
int pthread_setcanceltype(int , int * _Nullable)
  __asm("_" "pthread_setcanceltype" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_setconcurrency(int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_setschedparam(pthread_t, int, const struct sched_param *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use Task Local Values instead" "\")")))
int pthread_setspecific(pthread_key_t , const void * _Nullable);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use Task cancellation instead" "\")")))
void pthread_testcancel(void) __asm("_" "pthread_testcancel" );




__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_is_threaded_np(void);

__attribute__((availability(macos,introduced=10.6))) __attribute__((availability(ios,introduced=3.2)))
int pthread_threadid_np(pthread_t _Nullable,__uint64_t* _Nullable);


__attribute__((availability(macos,introduced=10.6))) __attribute__((availability(ios,introduced=3.2)))
int pthread_getname_np(pthread_t,char*,size_t);

__attribute__((availability(macos,introduced=10.6))) __attribute__((availability(ios,introduced=3.2)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Thread lifecycle is owned by Swift Concurrency runtime" "\")")))
int pthread_setname_np(const char*);


__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_main_np(void);


__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
mach_port_t pthread_mach_thread_np(pthread_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
size_t pthread_get_stacksize_np(pthread_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
void* pthread_get_stackaddr_np(pthread_t);


__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_cond_signal_thread_np(pthread_cond_t *, pthread_t _Nullable);


__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use an asynchronous wait instead of a synchronous wait" "\")")))
int pthread_cond_timedwait_relative_np(pthread_cond_t *, pthread_mutex_t *,
  const struct timespec * _Nullable);


__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_create_suspended_np(
  pthread_t _Nullable * _Nonnull, const pthread_attr_t * _Nullable,
  void * _Nullable (* _Nonnull)(void * _Nullable), void * _Nullable);





__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_kill(pthread_t, int);

__attribute__((availability(macos,introduced=10.5))) __attribute__((availability(ios,introduced=2.0)))
_Nullable pthread_t pthread_from_mach_thread_np(mach_port_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_sigmask(int, const sigset_t * _Nullable, sigset_t * _Nullable)
  __asm("_" "pthread_sigmask" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
__attribute__((__swift_attr__("@_unavailableFromAsync(message: \"" "Use Task.yield(), or await a condition instead of spinning" "\")")))
void pthread_yield_np(void);

__attribute__((availability(macos,introduced=11.0)))
__attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(driverkit,unavailable)))
void pthread_jit_write_protect_np(int enabled);

__attribute__((availability(macos,introduced=11.0)))
__attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(driverkit,unavailable)))
int pthread_jit_write_protect_supported_np(void);
# 608 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 3 4
typedef int (*pthread_jit_write_callback_t)(void * _Nullable ctx);
# 694 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 3 4
__attribute__((availability(macos,introduced=11.4)))
__attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(driverkit,unavailable)))
__attribute__((availability(swift,unavailable,message="This interface cannot be safely used from Swift")))
int pthread_jit_write_with_callback_np(
  pthread_jit_write_callback_t _Nonnull callback, void * _Nullable ctx);
# 725 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 3 4
__attribute__((availability(macos,introduced=12.1)))
__attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(driverkit,unavailable)))
void pthread_jit_write_freeze_callbacks_np(void);
# 744 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 3 4
__attribute__((availability(macos,introduced=11.0))) __attribute__((availability(ios,introduced=14.2))) __attribute__((availability(tvos,introduced=14.2))) __attribute__((availability(watchos,introduced=7.1)))
int
pthread_cpu_number_np(size_t *cpu_number_out);
# 746 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/pthread.h" 3 4
#pragma clang assume_nonnull end
# 2 "pthread.c" 2

int main(){

 return 0;
}
