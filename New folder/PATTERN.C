#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" ");

        for(int k=0;k<j;k++)
        {
            printf("*");
        }
        }
        printf("\n");
    }
return 0;
}