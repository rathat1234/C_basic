# include <stdio.h>

int main(int argc, char const *argv[])
{
    int count;
    int pn_count = 0;

    printf("input number : ");
    scanf("%d",&count);
    for (int i = 2; i < count; i++)
    {
        int pn = 1;
        for (int j = 2; j < i; j++)
        {
            if(i%j==0){
                pn = 0;
                break;
            }
        }
        if(pn){
            printf("%5d",i);
            pn_count++;
        }
        
    }
    printf("%d",pn_count);
    return 0;
}
