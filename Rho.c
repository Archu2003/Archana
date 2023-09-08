include <stdio.h>
int main()
{
    int i,j,space,rows;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(space=0;space<rows-i-1;space++)
        {
            printf(" ");
        }
        for(j=0;j<rows;j++)
        {
            printf("*");
            
        }
        printf("\n");
        
    }
}
