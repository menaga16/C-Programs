#include <stdio.h>

void printUnion(int *a1,int *a2,int m1,int m2)
{
    int *ptr1=a1;
    int *ptr2=a2;

    while(ptr1-a1<m1&&ptr2-a2<m2) 
    {
        if (*ptr1<*ptr2) 
        {
            printf("%d ",*ptr1++);
        } 
        else if (*ptr2<*ptr1) 
        {
            printf("%d ",*ptr2++);
        } 
        else 
        {
            printf("%d ",*ptr1++);
            ptr2++;
        }
    }

    while(ptr1-a1<m1) 
    {
        printf("%d ",*ptr1++);
    }

    while(ptr2-a2<m2) 
    {
        printf("%d ",*ptr2++);
    }

    printf("\n");
}

int main() 
{
    int n1,n2;

    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    int array1[n1];
    printf("Enter elements of first sorted array: ");
    for(int i = 0; i < n1; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    int array2[n2];
    printf("Enter elements of second sorted array: ");
    for(int i = 0; i < n2; i++) 
    {
        scanf("%d", &array2[i]);
    }

    printf("Union of the arrays: ");
    printUnion(array1, array2, n1, n2);

    return 0;
}
