#include <stdio.h>

#include "include/hello.h"

int x = 2;

int main(int a, int b){
    int c = 100;
    char d = 'a';
    char e[] = "abcde";
    float f = 1.0;
    double g = 1.0;

    printf("Hello World\n");
    printf("resutl %d\r\n",y(x));

    return 0;
}

int y (int x){
    return x*2;
}