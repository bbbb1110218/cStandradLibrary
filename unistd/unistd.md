# execl 系列函数



cl cle clp 
cv cve cvp

# l list 作为参数 NULL结尾
# v vector  需要char** argument 指针数组 NULL结尾
# e 需要char** env 环境变量指针数组 null结尾
# p 会在环境变量里面找

int	 execl(const char * __path, const char * __arg0, ...);	
int	 execle(const char * __path, const char * __arg0, ...); 
int	 execlp(const char * __file, const char * __arg0, ...);
int	 execv(const char * __path, char * const * __argv);
int	 execve(const char * __file, char * const * __argv, char * const * __envp); 
int	 execvp(const char * __file, char * const * __argv); 
