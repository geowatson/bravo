#include "atofe.h"
#include <math.h>
#include <jmorecfg.h>

int len(char s[]) {
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

double _atof(char s[], int len) {
    double n = .0;
    int i = 0, denominator = 10, sign = 1;
    int dot_found = FALSE;
    if(s[0] == '-') {
        sign = -1;
        i++;
    } else if(s[0] == '+') {
        i++;
    }

    for (; i < len; ++i) {
        if (s[i] == '.') {
            dot_found = TRUE;
        } else {
            n += s[i]-'0';
            n *= 10;
            if (dot_found) {
                denominator *= 10;
            }
        }
    }

    return sign * n / denominator;
}



double atof(char s[]) {
    return _atof(s, len(s));
}



double atofe(char s[]) {
    double n = .0;
    int i = 0, exponent = 0, exp_sign = 1;

    for (; s[i] != '\0' && s[i] != 'e' && s[i] != 'E'; ++i) {
        ;
    }
    n = _atof(s, i);

    if(s[++i] == '-') {
        exp_sign = -1;
        i++;
    } else if(s[i] == '+') {
        i++;
    }
    for(; s[i] != '\0'; ++i) {
        exponent += s[i] - '0';
        exponent *= 10;
    }
    exponent /= 10;
    return n * pow(10, exp_sign * exponent);
}