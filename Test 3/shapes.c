// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
void area( char shape, int size)
{
    float area;
    float pi = 3.14159;
    if(shape=='S')
    {
        area= size*size;
        printf("area of the shape %c is %f", shape, area);
    }
    else if(shape=='C')
    {
        area = pi * size * size;
        printf("area of the shape %c is %f", shape, area);
    }
    else
    {
        printf("INVALID DATA!!");
    }
    
}

int main()
{
    int a;
    char b;
    printf("Enter the shape (S/C):");
    scanf("%c",&b);
    printf("Enter the size:");
    scanf("%d",&a);
    area(b,a);
    return 0;
}