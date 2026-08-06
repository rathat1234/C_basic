#include <stdio.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int count;
    int pn_count = 0;
    time_t start_time, end_time;
    printf("input number : ");
    scanf("%d", &count);
    time(&start_time);
    for (int i = 3; i < count; i=i+2)
    {
        int pn = 1;
        for (int j = 3; j < (i / 2) + 1; j=j+2)
        {
            if (i % j == 0)
            {
                pn = 0;
                break;
            }
        }
        if (pn)
        {
            printf("%5d", i);
            pn_count++; 
            if (pn_count % 5 == 0)
                printf("\n");
        }
    }
    time(&end_time);
    printf("\nfind count : %d", pn_count);
    return 0;
}
