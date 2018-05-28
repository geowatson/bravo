//
// Created by George Watson on 28/05/2018.
//

#include "task.h"

char* flush(const char input[]) {
    int k = 0;
    char str[65534] = {0};
    int p = 0;
    int first = 1;

    for (;input[k] != '\0'; ++k) {
        if (input[k] == '/' && input[k + 1] != '\0' && input[k + 1] == '*') {
            while (input[k + 1] != '\0')
                if (input[k] == '*' && input[k + 1] == '/') {k++; break;}
                else k++;
            k += 1;
        }
        if (input[k] == '/' && input[k + 1] != '\0' && input[k + 1] == '/') {
            while (input[k + 1] != '\0' && input[k] != '\n') k++;
            if (first) k += 1;
        }
        if (input[k] != '\n') first = 0;
        else first = 1;
        str[p++] = input[k];
    }

    return (str);
}