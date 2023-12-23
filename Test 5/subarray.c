#include <stdio.h>

int subarray(int arr[],int size) 
{
    int max=arr[0]; 
    int index=arr[0]; 


    for (int i=1;i<size;i++) 
    {

        index=(arr[i]>index+arr[i])?arr[i]:index+arr[i];
        if (index>max) 
        {
            max=index;
        }
    }

    printf("The maximum sum of a subarray is: %d",max);
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements for the array:");
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&array[i]);
    }

    subarray(array,n);
    return 0;
}
