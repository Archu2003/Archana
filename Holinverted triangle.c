#include <stdio.h>
int main()
{
    int i,j,n,s;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(i==n||j==1||j==2*i-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
