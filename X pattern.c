#include <stdio.h>
int main()
{
    int i,j,n;
    printf(" enter the n value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||n==i+j+1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}

