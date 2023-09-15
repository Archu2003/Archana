#include<stdio.h>
int main()
{
    int i,j,s,n,l;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=-n;i<=n;i++)
    {
        if(i<0)
        l=-i;
        else
        l=i;
    for(s=0;s<l;s++)
    {
        printf(" ");
    }
    for(j=0;j<n-l+1;j++)
    {
        if(j==0)
        printf("* ");
        else if(l+j==n)
        printf("* ");
        else
        printf("  ");
    }
    printf("\n");
    }
}

