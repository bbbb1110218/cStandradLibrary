#include <stdio.h>
#include <unistd.h>


/**
 *   @func:          int rmdir(const char *pathname);
 *        
 *   @brief         pathname：要删除的目录的路径。
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return        rmdir 函数返回 0 表示成功，或者返回 -1 表示失败。在失败时，你可以检查 errno 来确定错误的原因。
 * 
 *   @note 
*/


int main() {
    if (rmdir("/path/to/directory") == -1) {
        perror("rmdir");
        return 1;
    }

    printf("Directory removed successfully.\n");
    return 0;
}

#define DELETE_NOT_NULL_DIR 0

#if DELETE_NOT_NULL_DIR  ///删除非空目录
#include <stdio.h>
#include <stdlib.h>
#include <ftw.h>
#include <unistd.h>

int remove_cb(const char *fpath, const struct stat *sb, int typeflag, struct FTW *ftwbuf) {
    int ret = remove(fpath);
    if (ret) perror(fpath);
    return ret;
}

int rmrf(const char *path) {
    return nftw(path, remove_cb, 64, FTW_DEPTH | FTW_PHYS);
}

int main() {
    if (rmrf("/path/to/directory") == -1) {
        perror("rmrf");
        return 1;
    }

    printf("Directory removed successfully.\n");
    return 0;
}
在 Unix 和 Linux 系统中，如果你想删除一个非空目录，你需要递归地删除目录中的所有文件和子目录。这通常需要编写一个递归函数，或者使用一个可以递归删除目录的库函数。

在 C 语言中，你可以使用 nftw 函数来遍历目录树，并删除每个文件和目录。以下是一个示例：



在这段代码中，rmrf 函数使用 nftw 函数遍历指定的目录，并对每个文件和目录调用 remove_cb 回调函数。remove_cb 回调函数使用 remove 函数删除每个文件和目录。

需要注意的是，这段代码会删除指定目录及其所有子目录和文件，所以你应该谨慎使用它。在删除文件和目录之前，你应该确认你有足够的权限，而且你不会误删重要的文件。
#endif 