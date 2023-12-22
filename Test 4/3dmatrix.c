#include <stdio.h>

int main() 
{
    int matrix[3][3];
    printf("Enter the values for a 3x3 matrix:");
    for (int i=1;i<=3;i++) 
    {
        for (int j=1;j<=3;j++) 
        {
            scanf("%d",&matrix[i][j]);
        }
    }

   printf("\n YOUR MATRIX:\n");
   for (int i=1;i<=3;i++) 
    {
        for (int j=1;j<=3;j++) 
        {
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
