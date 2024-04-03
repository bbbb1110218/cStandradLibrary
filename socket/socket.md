## socket连接过程

1. 建立socket  socket()
2. 绑定socket  bind()
3. 监听socket  listen()
4. 接受socket  accept()

## socket 获取原始数据包

```
#linux
int sockfd = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL));
#macos
socket(PF_NDRV, SOCK_RAW, 0)
if (sockfd < 0) {
    perror("socket");
    exit(EXIT_FAILURE);
}
```

当你使用原始套接字（Raw Socket）接收数据包时，你会得到整个数据包，包括所有的头部信息。这意味着你需要自己处理所有的协议头部，包括网络层（如 IP 头部）和传输层（如 TCP 或 UDP 头部）。

然而，当你使用普通的套接字（如 `SOCK_STREAM` 或 `SOCK_DGRAM`）接收数据时，操作系统会处理网络层和传输层的头部，然后只将应用层的数据传递给你的程序。这意味着你不需要自己处理 IP、TCP 或 UDP 头部。

例如，如果你使用 TCP 套接字接收数据，你将只得到 TCP 数据流中的数据，而不会看到 TCP 头部或 IP 头部。操作系统会处理这些头部，并负责如确认、重传等 TCP 的细节。

总的来说，除非你需要进行底层的网络编程（如编写网络嗅探器或自定义协议），否则你通常不需要使用原始套接字。对于大多数网络编程任务，使用 `SOCK_STREAM` 或 `SOCK_DGRAM` 的普通套接字就足够了。
