#include <stdio.h>

void Jump(int arr[],int Size) 
{
    int max=0;
    int reach=0; 
    for (int i=0;i<Size;i++) 
    {
        if (i>max) 
        {
            printf("RESULT: FALSE");
            return; 
        }
        max = (max>i+arr[i])?max:i+arr[i];
        if (max>=Size-1) 
        {
            reach = 1; 
            break; 
        }
    }

    if (reach) 
    {
        printf("RESULT: TRUE");
    } 
    else 
    {
        printf("RESULT: FALSE");
    }
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array:\n");
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&array[i]);
    }
    Jump(array,n);
    return 0;
}
