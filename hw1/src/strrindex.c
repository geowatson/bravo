//
// Created by George Watson on 28/05/2018.
//

#include "task.h"

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