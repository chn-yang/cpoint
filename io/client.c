/*linux socket AF_INET TCP 编程示例，单进程单线程，ehco 客户端*/

#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    int cli_sock = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in serv_addr;
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(8889);
    // serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    //将 inet_addr() 改用 inet_pton() 这个现代的方法，支持 IPV4 和 IPV6
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) == -1) {
        printf("inet_pton error\n");
        close(cli_sock);
        return 0;
    }

    //将 inet_ntoa() 改用 inet_ntop() 这个现代方法，支持 IPV4 和 IPV6
    // printf("bind in %s : %d\n", inet_ntoa(serv_addr.sin_addr),
    // ntohs(serv_addr.sin_port)); INET_ADDRSTRLEN 是标识 IPV4
    // 地址展现字符串的大小常量,INET6_ADDRSTRLEN是 IPV6 的
    char serv_ip[INET_ADDRSTRLEN];
    if (inet_ntop(AF_INET, &serv_addr.sin_addr, serv_ip, sizeof(serv_ip)) ==
        NULL) {
        printf("inet_ntop error\n");
        close(cli_sock);
        return 0;
    }
    printf("bind in %s : %d\n", serv_ip, ntohs(serv_addr.sin_port));

    int conn =
        connect(cli_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr));
    if (conn == -1) {
        printf("connect error\n");
        return 0;
    }

    while (1) {
        char input[256];
        printf("entry a line: ");
        if (fgets(input, 256, stdin) == NULL) {
            break;
        }

        char output[256];
        write(cli_sock, input, strlen(input) + 1);
        int read_len = read(cli_sock, output, sizeof(output));
        if (read_len <= 0) {
            printf("read error\n");
            close(cli_sock);
        }

        printf("read: %d byte, data: %s\n", read_len, output);
    }

    close(cli_sock);
    printf("886\n");
    return 0;
}