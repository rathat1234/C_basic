#include <stdio.h>

int main(void){
    int a, b;
    char op;
    printf("integer : ");
    scanf("%d %c %d",&a,&op,&b);
    
    switch(op){
        case '+':
            printf("%d %c %d = %d\n", a, op, b, a*b);
            break;
        case '-':
            printf("%d %c %d = %d\n", a, op, b, a-b);
            break;
        case '*':
            printf("%d %c %d = %d\n", a, op, b, a*b);
            break;
        case '/':
            if (0 == b){
                printf("no divide by 0");
            } else {
            printf("%d %c %d = %f\n", a, op, b, (float)a/(float)b);
            }
            break;
            
    }
    // if (op == '*') {
    //     printf("%d %c %d = %d", a, op, b, a*b);
    // } else if (op == '+') {
    //     printf("%d %c %d = %d", a, op, b, a+b);
    // } else if (op == '-') {
    //     printf("%d %c %d = %d", a, op, b, a-b);
    // } else {
        // if (0 == b){
        //     printf("no divide by 0");
        // }
    //     printf("%d %c %d = %d", a, op, b, a/b);

    // }
    return 0;
}