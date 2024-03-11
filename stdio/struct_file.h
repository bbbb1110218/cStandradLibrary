#include <stdio.h>


/** @brief 文件结构
 * 
struct __sbuf {
	unsigned char	*_base;
	int		_size;
};

typedef struct __sFILE {
 unsigned char *_p;         //缓冲区的位置
 int _r;                    //getc() 读取空间
 int _w;                    //putc() 写入空间
 short _flags;              //如果_flags 为0 当前结构为空闲
 short _file;               //fileNo  fd
 struct __sbuf _bf;         //缓冲区 至少一个字节 如果非NULL
 int _lbfsize;              // 0 或 -_bf._size，用于内联 putc 

//操作
 void *_cookie;                                      //传递给io的cookit
 int (* _Nullable _close)(void *);                      //函数指针
 int (* _Nullable _read) (void *, char *, int);
 fpos_t (* _Nullable _seek) (void *, fpos_t, int);
 int (* _Nullable _write)(void *, const char *, int);

// 为 ungetc() 的长序列提供单独的缓冲区 
struct __sbuf _ub; // ungetc 缓冲区 
struct __sFILEX *_extra; // 添加到 FILE 以避免破坏 ABI 
int _ur; // 当 _r 计算 ungetc 数据时保存 _r 

	/ 在 malloc() 失败时也能满足最低要求的技巧
 unsigned char _ubuf[3];    //保证 ungetc() 缓冲 
 unsigned char _nbuf[1];     /* 保证有一个 getc() 缓冲 


 struct __sbuf _lb;

	// 在 fseek() 时，Unix stdio 文件会按块边界对齐 
 int _blksize;
 fpos_t _offset;
} FILE;
 */

typedef struct __sbuf BUFF;
