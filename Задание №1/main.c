/*
@author Skalozubov_Max1m
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
@link https://github.com/mmjax/code_for_school

Проектное задание #1
Калькулятор с возможностью:
подсчёта равенств по вводу например: |.\calc FUNCTION(y=8+469*x) SET(x=8)|
*/
#include <string.h>
#include <stdio.h>
#include "computeFunctions.c"

#define ARGNUM 256

int main(int argc, char *argv[]) {
    int i;
    char argName[ARGNUM];
    int argVal[ARGNUM];
    int argCnt = 0;
    char y, x;
    int a, b;

    for (i = 1; i < argc; i++) {
        if (0 == strncmp(argv[i], "SET", strlen("SET"))) {
            parseSet(argv[i], argName, argVal, &argCnt);
            printf("argv[i] = %s", argv[i]);
            break;            
        }
        if (0 == strncmp(argv[i], "FUNCTION", strlen("FUNCTION")))
            parseFunction(argv[i], &y, &x, &a, &b);
    }
    computeFunction(argName, argVal, argCnt, a, b, x, y);
    return 0;
}
