#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=-n;j<=n;j++)
        {
            if(-(n-i)<j&&j<(n-i))
            printf("  ");
            else
            printf("* ");
        }
        printf("\n");
    }
}
