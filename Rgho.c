#include <stdio.h>
int main()
{
    int i,j,n,s;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(s=0;s<i-0;s++)
        {
            printf(" ");
        }
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
