//
// Created by George Watson on 26/05/2018.
//

#include "main.h"
#include "stdlib.h"
int main() {
    // printf("%d", 113);
    system("if [ -f \"ts\" ] then rm ts fi\n");
    system("c99 ../ts.c -o ts");
    char *args[]={"./ts",NULL};
    execvp(args[0],args);
    return 0;
}