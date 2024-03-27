#include <stdio.h>
#include <unistd.h>


/**
 *   @func: int setdomainname(const char *name, size_t len);
 *        
 *   @brief     setdomainname 函数设置的是系统的 NIS 或 DNS 域名，
 *              这主要用于网络管理和电子邮件系统，而不是用于 DNS 解析。
 *      
 *   @param  name 是你想要设置的域名。
 *   @param  len 是域名的长度。
 *   @param   setdomainname 函数在成功时返回 0，在失败时返回 -1 并设置 errno。
 * 
 *   @return 
 * 
 *   @note  设置本机的域名主要用于网络环境中的标识和通信。

        在网络环境中，每台计算机都有一个唯一的 IP 地址，但是 IP 地址不易于记忆和识别。因此，
        我们通常会给每台计算机分配一个域名，这样就可以使用容易记忆和识别的域名来访问计算机，而不是使用难以记忆的 IP 地址。

        此外，域名还用于电子邮件系统。在电子邮件地址中，"@" 符号后面的部分就是域名。电子邮件系统会使用这个域名来路由邮件。

        在 Unix-like 系统中，你可以使用 hostname 命令查看或设置主机名，使用 dnsdomainname 或 domainname 
        命令查看或设置域名。在程序中，你可以使用 gethostname、sethostname、getdomainname 和 setdomainname 函数来获取或设置主机名和域名。

        需要注意的是，设置本机的域名并不会自动将这个域名注册到 DNS 服务器。
        如果你想让其他计算机能够通过这个域名访问你的计算机，你需要在 DNS 服务器上注册这个域名。
*/


int main() {
    if (setdomainname("example.com", 11) == -1) {
        perror("setdomainname");
        return 1;
    }

    return 0;
}