#include <stdio.h>
#include <stdint.h>

#define BIT_SET(var, pos) ((var) |= (1UL << (pos)))
#define BIT_CLEAR(var, pos) ((var) &= ~(1UL << (pos)))
#define BIT_TOGGLE(var, pos) ((var) ^= (1UL << (pos)))
#define BIT_CHECK(var, pos) (((var) & (1UL << (pos))) >> (pos))

void print_b(uint32_t data)
{
    int num = (int)data;
    int hex[32] = {0};
    int cnt = 0;
    while (num != 0)
    {
        if (num%2==0){
            hex[cnt] = 0;
        }
        else{
            hex[cnt] = 1;
        }
        cnt += 1;
        num /= 2;
    }
    int count = 0;

    for (int i = 31; i >= 0; i--)
    {
        printf("%d",hex[i]);
        count++;
        if(count==4){
            printf(" ");
            count = 0;
        }
    }
    

}
void print_hex(uint32_t data)
{
    printf("Hex: ");
    printf("0x%8x", data);
    printf("| Bin: ");
    print_b(data);
}


int main(int argc, char const *argv[])
{
    uint32_t data = 0x12345678;
    printf("=== Day 1: Bitwise Macro Test ===");
    int num = 0, num1 = 1;

    printf("\n[Init]   ");
    print_hex(data);

    printf("\n[SET]    Target: Bit ");
    scanf("%d", &num);
    BIT_SET(data, num);
    print_hex(data);

    printf("\n[CLEAR]  Target: Bit ");
    scanf("%d", &num);
    BIT_CLEAR(data, num);
    print_hex(data);

    printf("\n[TOGGLE] Target: Bit ");
    scanf("%d", &num);
    BIT_TOGGLE(data, num);
    print_hex(data);

    printf("\n[CHECK]  Bit ");
    scanf(" %d ", &num);
    printf(" is currently : %d", BIT_CHECK(data,num));

    return 0;
}
