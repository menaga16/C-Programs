#include <stdio.h>
int main()
{
    int n=0,a=1,b=2;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf(" ");
        }
        
        if((i+1)%2==0)
        {
            for(int k=0;k<=i;k++)
            {
                printf("%d ",b);
                b+=2;
            }
        }
        else
        {
            for(int k=0;k<=i;k++)
            {
                printf("%d ",a);
                a+=2;
            }
        }
        printf("\n");
    }
    return 0;
}