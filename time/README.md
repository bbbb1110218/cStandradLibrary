# time里面的结构

 `time_t`  时间戳格式 long类型

`clock_t`  时间频率/CPU时间 需要  除以 CLOCKS_PER_SEC 才是秒

`struct tm` 存储时间的结构体 里面有年，月，日，时，分，秒


# 用法

`time` 获取时间戳

`ctime`  size_t to str

`asctime` struct tm * to str

`gmtime`   size_t  to struct tm  格林时间

`localtime`  time_t to struct tm 本地时间

`strftime`  struct tm * to str by format

`strptime`  timeStr to struct tm  by format



# 在 C 语言的标准库中，`time.h` 头文件提供了一些处理时间和日期的函数。以下是一些主要的函数：

1. `time_t time(time_t *t)`: 返回当前的时间（从 1970 年 1 月 1 日 00:00:00 UTC 开始的秒数）。如果 `t` 不是 NULL，那么返回的时间也会被存储在 `t` 指向的位置。
2. `char *ctime(const time_t *t)`: 将 `t` 指向的时间转换为一个字符串，这个字符串包含了日期和时间的信息。这个函数返回的字符串是静态分配的，所以你不需要（也不能）释放它。
3. `struct tm *gmtime(const time_t *t)`: 将 `t` 指向的时间转换为格林威治时间（GMT）。返回的 `struct tm` 是静态分配的，所以你不需要（也不能）释放它。
4. `struct tm *localtime(const time_t *t)`: 将 `t` 指向的时间转换为本地时间。返回的 `struct tm` 是静态分配的，所以你不需要（也不能）释放它。
5. `time_t mktime(struct tm *tm)`: 将 `tm` 指向的本地时间转换为一个 `time_t` 值。
6. `char *ctime_r(const time_t *, char *)`: 这是 `ctime` 的线程安全版本。它将结果存储在提供的缓冲区中，而不是静态分配的缓冲区。
7. `struct tm *gmtime_r(const time_t * __restrict, struct tm * __restrict)`: 这是 `gmtime` 的线程安全版本。它将结果存储在提供的 `struct tm` 中，而不是静态分配的 `struct tm`。
8. `struct tm *localtime_r(const time_t * __restrict, struct tm * __restrict)`: 这是 `localtime` 的线程安全版本。它将结果存储在提供的 `struct tm` 中，而不是静态分配的 `struct tm`。
9. `time_t posix2time(time_t)`: 将 POSIX 时间（即，忽略闰秒的时间）转换为 wall-clock 时间。
10. `time_t time2posix(time_t)`: 将 wall-clock 时间转换为 POSIX 时间。
11. `void tzsetwall(void)`: 设置时区为系统的默认时区。
12. `clock_t clock(void)`: 返回程序启动以来的 CPU 时间。你可以使用这个函数来测量程序的运行时间。
13. `double difftime(time_t end, time_t start)`: 返回 `end` 和 `start` 之间的时间差，单位是秒。
14. `double difftime(time_t end, time_t start)`: 返回 `end` 和 `start` 之间的时间差，单位是秒。
15. `size_t strftime(char *s, size_t max, const char *format, const struct tm *tm)`: 根据 `format` 指定的格式，将 `tm` 指向的时间转换为一个字符串。转换后的字符串被存储在 `s` 指向的缓冲区中。
16. `struct tm`：这是一个结构体，用于表示日期和时间。它包含了年、月、日、小时、分钟、秒等成员。
17. `clock_t` 和 `time_t`：这是两个类型，分别用于表示 CPU 时间和日历时间。
