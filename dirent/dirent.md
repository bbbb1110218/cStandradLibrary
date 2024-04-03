## dirent	directory entry 目录条目

opendir() 获取一个 DIR*对象

readdir(DIR*) 循环便利DIR* 对象 获取 struct dirent*指针 直到NULL

struct dirent 结构里面有目录下的文件名称

rewind()

telldir(DIR*) 获取在第几个位置

dirfd(DIR*) 获取目录的文件描述符

seekdir(DIR *,pos)

rewind(dir *) 重新开始

close(dir *) 关闭文件流

## 判断文件是什么类型的

stat(full_path,struct stat *save_struct);

通过S_ISDIR(sava_struct->st_mode) 判断文件是什么类型
