#include <stdio.h>

void swap(void *a, void *b)
{
    // int a = sizeof(a)
    printf("a: %c, b: %d", *(char*)a, *(int*)b);
    int temp = *(int*)a;
    *(int*)a = *(int*)b;
    *(int*)b = temp;
}

int main(int argc, char const *argv[])
{
    int a = 0x31, b = 2;

    swap(&a, &b);
    printf("a: %d, b: %d", a, b);
    return 0;
}
