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
    printf("%d", strrindex("abcdabcdabc", "abc"));
    return 0;
}
int strrindex(const char s[], const  char t[]){
	int lens, lent, seed, j;
	seed = -1;
	lent = 0;
	lens = 0;
	STRING_LEN(lens, s);
	STRING_LEN(lent, t);

	if (lent > lens)
		return -1;

	int i = 0;
	int q = 0;
	for (; i + lent - 1 < lens; ++i) {
		q = 0;
		j = i;
		while (j < lens && s[j] == t[q]) {
			q++;
			j++;
		}
		if (q == lent) seed = i;
	}

	return seed;
}