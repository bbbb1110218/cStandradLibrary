# 1 "fcntl.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 385 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "fcntl.c" 2
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/fcntl.h" 1 3 4
# 23 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/fcntl.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 1 3 4
# 78 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 1 3 4
# 32 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 1 3 4
# 769 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 770 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 2 3 4
# 835 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 836 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 2 3 4
# 33 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 1 3 4
# 32 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/_types.h" 1 3 4
# 39 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/_types.h" 3 4
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
# 72 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/_types.h" 3 4
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
# 33 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 2 3 4
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
# 79 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 2 3 4

# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
# 176 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 177 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/Availability.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 1 3 4
# 176 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h" 1 3 4
# 177 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 2 3 4
# 178 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/Availability.h" 2 3 4
# 81 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 2 3 4

# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 84 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 85 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 86 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 87 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 2 3 4
# 116 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_o_sync.h" 1 3 4
# 117 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 2 3 4
# 146 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_o_dsync.h" 1 3 4
# 147 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 2 3 4
# 363 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 364 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 2 3 4

# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_s_ifmt.h" 1 3 4
# 370 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 2 3 4
# 389 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 3 4
struct flock {
  off_t l_start;
  off_t l_len;
  pid_t l_pid;
  short l_type;
  short l_whence;
};

# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/types.h" 1 3 4
# 35 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/types.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 1 3 4
# 79 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 80 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 81 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 82 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 83 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4

# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h" 3 4
typedef unsigned char u_int8_t;
# 85 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h" 3 4
typedef unsigned short u_int16_t;
# 86 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h" 3 4
typedef unsigned int u_int32_t;
# 87 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h" 3 4
typedef unsigned long long u_int64_t;
# 88 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4

typedef int64_t register_t;

# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/types.h" 1 3 4
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 96 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 97 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4

typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;

typedef u_int64_t syscall_arg_t;
# 36 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/types.h" 2 3 4
# 32 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h" 2 3 4

struct timespec {
  __darwin_time_t tv_sec;
  long tv_nsec;
};
# 398 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 2 3 4

struct flocktimeout {
  struct flock fl;
  struct timespec timeout;
};
# 417 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 3 4
struct radvisory {
  off_t ra_offset;
  int ra_count;
};
# 430 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fsignatures {
  off_t fs_file_start;
  void *fs_blob_start;
  size_t fs_blob_size;

  size_t fs_fsignatures_size;
  char fs_cdhash[20];
  int fs_hash_type;
} fsignatures_t;

typedef struct fsupplement {
  off_t fs_file_start;
  off_t fs_blob_start;
  size_t fs_blob_size;
  int fs_orig_fd;
} fsupplement_t;
# 461 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fchecklv {
  off_t lv_file_start;
  size_t lv_error_message_size;
  void *lv_error_message;
} fchecklv_t;
# 475 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fgetsigsinfo {
  off_t fg_file_start;
  int fg_info_request;
  int fg_sig_is_platform;
} fgetsigsinfo_t;
# 490 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fstore {
  unsigned int fst_flags;
  int fst_posmode;
  off_t fst_offset;
  off_t fst_length;
  off_t fst_bytesalloc;
} fstore_t;

typedef struct fpunchhole {
  unsigned int fp_flags;
  unsigned int reserved;
  off_t fp_offset;
  off_t fp_length;
} fpunchhole_t;

typedef struct ftrimactivefile {
  off_t fta_offset;
  off_t fta_length;
} ftrimactivefile_t;

typedef struct fspecread {
  unsigned int fsr_flags;
  unsigned int reserved;
  off_t fsr_offset;
  off_t fsr_length;
} fspecread_t;

typedef struct fattributiontag {
  unsigned int ft_flags;
  unsigned long long ft_hash;
  char ft_attribution_name[255];
} fattributiontag_t;
# 555 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 3 4
#pragma pack(4)

struct log2phys {
  unsigned int l2p_flags;
  off_t l2p_contigbytes;

  off_t l2p_devoffset;
};

#pragma pack()
# 578 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_filesec_t.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_filesec_t.h" 3 4
struct _filesec;
typedef struct _filesec *filesec_t;
# 579 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h" 2 3 4

typedef enum {
  FILESEC_OWNER = 1,
  FILESEC_GROUP = 2,
  FILESEC_UUID = 3,
  FILESEC_MODE = 4,
  FILESEC_ACL = 5,
  FILESEC_GRPUUID = 6,

  FILESEC_ACL_RAW = 100,
  FILESEC_ACL_ALLOCSIZE = 101
} filesec_property_t;

int open(const char *, int, ...) __asm("_"
                                       "open");

int openat(int, const char *, int, ...) __asm("_"
                                              "openat")
    __attribute__((availability(macosx, introduced = 10.10)));

int creat(const char *, mode_t) __asm("_"
                                      "creat");
int fcntl(int, int, ...) __asm("_"
                               "fcntl");

int openx_np(const char *, int, filesec_t);

int open_dprotected_np(const char *, int, int, int, ...);
int openat_dprotected_np(int, const char *, int, int, int, ...);
int openat_authenticated_np(int, const char *, int, int);
int flock(int, int);
filesec_t filesec_init(void);
filesec_t filesec_dup(filesec_t);
void filesec_free(filesec_t);
int filesec_get_property(filesec_t, filesec_property_t, void *);
int filesec_query_property(filesec_t, filesec_property_t, int *);
int filesec_set_property(filesec_t, filesec_property_t, const void *);
int filesec_unset_property(filesec_t, filesec_property_t)
    __attribute__((availability(macosx, introduced = 10.6)));
# 24 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/fcntl.h" 2 3 4
# 2 "fcntl.c" 2

int main() { return 0; }
