#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d",sum);
    }
}
