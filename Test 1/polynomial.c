#include <stdio.h>
#include <math.h>

int main() 
{
    int degree, x, i, coeff[degree + 1];
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    printf("Enter the coefficients: ");

    for (i = 0; i <= degree; i++) 
    {
        scanf("%d", &coeff[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);
    double result = 0;

    for (i = 0; i <= degree; i++) 
    {
        result += coeff[i] * pow(x, i);
    }

    printf("P(%d) = %.2lf\n", x, result);
    return 0;
}