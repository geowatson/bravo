//
// Created by George Watson on 26/05/2018.
//

#ifndef STRING_LEN
#define STRING_LEN(j, c) do                \
	{                                  \
		for (;'\0' != (c)[j];(j)++); \
	} while(0)
#endif

#include "math.h"
#include "main.h"
#include "stdlib.h"
int main() {
    /*
    // printf("%d", 113);
    system("if [ -f \"ts\" ] then rm ts fi\n");
    system("c99 ../ts.c -o ts");
    char *args[]={"./ts",NULL};
    execvp(args[0],args);
    */
    printf("%d", htoi("E2fA5"));
    return 0;
}

int htoi(const char s[]) {
    int res, c, d, p = 0;
    res = 0;
    STRING_LEN(p, s);
    c = (p > 2 && (s[1] == 'x' || s[1] == 'X')) ? 2 : 0;
    d = c ? c - 2 : 0;
    for (;s[c] != '\0'; ++c) {
        res += number(s[c]) * (int)(pow(16, p - d - c - 1));
    }
    return res;
}

int number(char c) {
    return (c - '0') < 10 ? (c - '0') : (
            c - '0' < 23 ? c - '0' - 7 :
            c - '0' - 39
    );
}