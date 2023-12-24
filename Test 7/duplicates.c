#include <stdio.h>

void duplicates(int *a, int m) 
{
    int i, j;
    int found = 0;

    printf("Duplicates in the array: ");
    for (i=0;i<m;i++) {
        for (j=i+1;j<m;j++) 
        {
            if (*(a+i)==*(a+j)) 
            {
                printf(" %d ",*(a+i));
                found=1;
                break;
            }
        }
    }

    if (!found) 
    {
        printf("-1");
    }
    printf("\n");
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array: ");
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&array[i]);
    }
    duplicates(array,n);
    return 0;
}
