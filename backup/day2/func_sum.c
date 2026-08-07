#include <stdio.h>

long long sum(long long n)
{   
    long long temp = 1+n;
    long long result;
    result = temp * (n/2);

    return result;
}

long long sum(int n){
    long long result = 0;
    int i = 0;
    while (i<=n) // 1 이면 무한 반
    {
        result = result + i;
        i++;
    }
    
}


int main(int argc, char const *argv[])
{
    long long input = 1000000000000;
    // printf("입력 : ");
    // scanf("%d", &input);
    long long result = sum(input);
    printf("%I64d", result);


    return 0;
}
