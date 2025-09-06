//
//  main.cpp
//  networking-spp
//
//  Created by Taguhi Abgar on 06.09.25.
//

#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1) {
        std::cerr << "Failed to create socket\n";
        return 1;
    }

    std::cout << "Socket created successfully (fd=" << sock << ")\n";

    close(sock);
    return 0;
}

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}
