#include <stdio.h>

int secondlargest(int a[],int m) 
{
    int first=a[0];
    int second=a[0];

    for(int i= 0;i<m;i++) 
    {
        if (a[i]>first) 
        {
            second = first;
            first = a[i];
        } 
        else if (a[i]>second&&a[i]!=first) 
        {
            second = a[i];
        }
    }

    printf("Second largest element in the array: %d",second);
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter the elements: ");
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&array[i]);
    }

    secondlargest(array,n);
    return 0;
}
