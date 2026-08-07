#include <stdio.h>

void input_nums(int *lotto);
void print_nums(int *lotto);

int main(int argc, char const *argv[])
{
    int lotto_nums[6];
    input_nums(lotto_nums);
    print_nums(lotto_nums);
    return 0;
}

void input_nums(int *lotto)
{
    int num;
    int a;
    for (int i = 0; i < 6; i++)
    {
        printf("번호 입력:");
        scanf("%d", &num);
        a = 0;
        for (int j = 0; j < i; j++)
        {
            if (lotto[j] == num)
            {
                a = 1;

                break;
            }
        }
        if (!a)
        {
            lotto[i] = num;
        }
        else
        {
            printf("같은 번호가 있습니다. \n");
            i--;
        }
    }
}
void print_nums(int *lotto)
{
    printf("번호 출력 : ");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (lotto[i] < lotto[j])
            {
                int temp = lotto[i];
                lotto[i] = lotto[j];
                lotto[j] = temp;
            }
        }
    }

    
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ", lotto[i]);
    }
}