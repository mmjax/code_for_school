int parseFunction(char *str, char *y, char *x, int *a, int *b);
int parseSet(char *str, char *argName, int *argVal, int *argCnt);
int computeFunction(char *argName, int *argVal, int *argCnt, int *a, int *b, char *x, char *y);
int getY(char *str, char *y);
int getAX(char *str, char *x, int *a);
int getB(char *str, int *b);