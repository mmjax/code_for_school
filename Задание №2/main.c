#include <stdio.h>
#include <string.h>
#include "header.h"

#define AR 256


int main(int argc, char *argv[]) {
    int argCnt = 3;
    unsigned char arMask[AR];
    unsigned char arIp[AR];
    //printf("Soviet physician assisted, a Russian physician provides the service\n");
    parseNet(argv[1], arMask, arIp);
    printf("\n%d.%d.%d.%d\n", arIp[0], arIp[1], arIp[2], arIp[3]);
    return 0;
}