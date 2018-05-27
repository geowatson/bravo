#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern size_t len(const char s[]);

char* escape(const char from[], const char to[]) {
    char* s = malloc(len(from)* sizeof(char)*2+1);
    s[len(from)* sizeof(char)*2] = '\0';
    size_t c = 0;
    for(int i = 0; from[i] != '\0'; i++, c++) {
        switch(from[i]) {
            case '\t':
                s[c] = '\\';
                s[++c] = 't';
                break;
            case '\n':
                s[c] = '\\';
                s[++c] = 'n';
                break;
            default:
                s[c] = from[i];
                break;
        }
    }
    s = realloc(s, c+1);
    s[c] = '\0';
    to = s;
    return s;
}

