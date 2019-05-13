#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "header.h"

int parseNet(char *str,char *arMask, char *arIp) {
    getIp(str, arIp);
    getMask(str, arMask);
}

int getIp(char *str, char *arIp) {
    int i, cnt;
    for (i = 4, cnt = 0; i < (int)strlen(str) && str[i] != '/'; i++, cnt++) {
        arIp[cnt] = atoi((char *)(&str[i]));
        for (; i < (int)strlen(str) && str[i] != '.' && str[i] != '/'; i++) ;
        if (str[i] == '/')
            break;
    }

}

int getMask(char *str, char *arMask) {
    int i, cnt;
    for (i = 10; i < (int)strlen(str) && str[i] != '/'; i++) ;
    printf("\nmask = ");
    for (cnt = 0; i < (int)strlen(str); cnt++, i++) {
        arMask[cnt] = atoi((char *)(str[i]));
        printf("%c", arMask[cnt]);
    }
}