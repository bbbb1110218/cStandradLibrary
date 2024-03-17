#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

/**
  @function fpathconf(int fd,int name);
    
  @brief:		fpathconf 是一个系统调用，用于获取与文件相关的系统限制。

  @brief fd 文件描述符
  @param name _PC_LINK_MAX：文件的最大链接数。
        _PC_MAX_CANON：终端设备的最大规范输入行大小。
        _PC_MAX_INPUT：终端设备的最大输入行大小。
        _PC_NAME_MAX：文件系统的最大文件名长度。
        _PC_PATH_MAX：文件系统的最大路径名长度。
        _PC_PIPE_BUF：管道的最大写入大小。
        _PC_CHOWN_RESTRICTED：是否限制使用 chown 和 fchown。
        _PC_NO_TRUNC：是否在超过 _PC_NAME_MAX 时截断文件名。
        _PC_VDISABLE：终端特殊字符的禁用值。      
		
		它接受两个参数：一个文件描述符和一个名字，返回该名字对应的限制值。

	    第一个参数是一个打开的文件描述符。第二个参数是你想查询的限制的名字，
		
		它通常是一些预定义的常量，如 _PC_PATH_MAX、_PC_NAME_MAX 等。
 */




int main() {
    int fd= open("/tmp/tmp.txt",O_CREAT  | O_WRONLY |O_TRUNC,0644);
    long name_max = fpathconf(fd, _PC_NAME_MAX);
    if (name_max == -1) {
        perror("fpathconf");
        return 1;
    }

    printf("Maximum filename length: %ld\n", name_max);
    close(fd);

    return 0;
}
