#include <stdio.h>

int main() 
{
    int total_days, y, w, d;
    printf("Enter the total no.of days: ");
    scanf("%d", &total_days);
    y= total_days/365;
    w= (total_days%365)/7;
    d= (total_days%365)%7;

    printf("Number of Years: %d \n", y);
    printf("Number of Weeks: %d \n", w);
    printf("Number of Days: %d \n", d);

    return 0;
}
