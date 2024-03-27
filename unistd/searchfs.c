#include <stdio.h>
#include <unistd.h>
#include <string.h>


/**
 *   @func:     int searchfs(const char* path, 
 *                              const struct fssearchblock* searchblock, 
 *                              unsigned int* nummatches, 
 *                              unsigned int scriptcode, 
 *                              unsigned int options, 
 *                              struct searchstate* searchstate);
 *        
 *   @brief     searchfs 是 macOS 系统特有的一个系统调用，它用于在文件系统中快速搜索文件。
 *              这个函数可以在整个文件系统中搜索文件，或者只在指定的目录中搜索文件。
 *      
 *   @param     path 是你想要搜索的目录的路径。
 *   @param     searchblock 是一个指向 fssearchblock 结构的指针，这个结构包含了搜索的参数。
 *   @param     nummatches 是一个指向无符号整数的指针，searchfs 函数会将找到的匹配项的数量存储在这个整数中。
 *   @param     scriptcode 是用于字符串比较的脚本代码。
 *   @param     options 是搜索选项，可以是 FSOPT_NOFOLLOW 或 FSOPT_REPORT_FULLSIZE。
 *   @param     searchstate 是一个指向 searchstate 结构的指针，这个结构用于保存搜索的状态，以便于后续的搜索操作。
 * 
 *   @return    macos专用，并且要用root权限 没明白
 * 
 *   @note 
*/
#include <unistd.h>
#include <stdio.h>
#include <sys/attr.h>
#include <sys/searchfs.h>

int main() {
    const char *path = "/path/to/directory";
    struct fssearchblock searchblock;
    struct attrlist attributes;
    struct searchstate searchstate;
    unsigned long nummatches = 0;

    // Set up the attributes to match all files
    memset(&attributes, 0, sizeof(attributes));
    attributes.bitmapcount = ATTR_BIT_MAP_COUNT;
    attributes.commonattr = ATTR_CMN_NAME;

    // Set up the search block
    searchblock.searchattrs = &attributes;
    searchblock.maxmatches = 100;
    searchblock.timelimit.tv_sec = 0;
    searchblock.timelimit.tv_nsec = 0;
    searchblock.sizeofsearchattrs = sizeof(attributes);
    searchblock.searchattrsbuf = NULL;
    searchblock.sizeofsearchattrsbuf = 0;
    searchblock.options = 0;

    // Perform the search
    if (searchfs(path, &searchblock, &nummatches, 0, 0, &searchstate) == -1) {
        perror("searchfs");
        return 1;
    }

    printf("Found %lu matches\n", nummatches);

    return 0;
}