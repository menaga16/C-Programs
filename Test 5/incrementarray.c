#include <stdio.h>

void increment(int arr[],int size) 
{
    int i,sum,carry=1; 
    for (int i=size-1;i>=0;i--) 
    {
        sum=arr[i]+carry;
        arr[i]=sum%10; 
        carry=sum/10;
    }
    if (carry) 
    {
        printf("Incremented array: 1 ");
         for (i=0;i<size;i++) 
            {
                printf("%d ", arr[i]);
            }
        
    } 
    else 
    {
        printf("Incremented array: ");
        for (i=0;i<size;i++) 
            {
                printf("%d ", arr[i]);
            }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array:\n");
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&array[i]);
    }
    printf("Original array: ");
    for (int j=0;j<n;j++) 
    {
        printf("%d ", array[j]);
    }
    printf("\n");
    increment(array,n);
    return 0;
}
