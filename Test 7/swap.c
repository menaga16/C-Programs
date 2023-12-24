#include <stdio.h>

void byvalue(int x,int y) 
{
    int temp=x;
    x=y;
    y=temp;
    printf("values after swaped by value: x=%d,y=%d\n",x,y);
}


void byreference(int *x,int *y) 
{
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("values after swaped by reference: x=%d, y=%d\n",*x,*y);
}

int main() 
{
    int a,b;
    printf("enter the value of A:");
    scanf("%d",&a);
    printf("enter the value of B:");
    scanf("%d",&b);
    
    byvalue(a, b);
    byreference(&a,&b);
    return 0;
}
