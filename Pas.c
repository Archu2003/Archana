include <stdio.h>
int main()
{
    int i,j,n,sp,c;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(sp=1;sp<=n-i;sp++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(i==0||j==0)
            c=1;
            else
            c=(c*(i-j+1))|j;
            printf("%d",c);
            printf("\n");
        }
    }
}
    
