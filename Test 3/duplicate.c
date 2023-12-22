#include <stdio.h>

void count(int array[], int n) 
{
    printf("Original Array: ");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Duplicate Elements: ");
    for (int i = 0; i < n;) {
        int num = array[i];
        int count = 1;
        for (int j = i + 1; j < n; j++) 
		{
            if (array[j] == num) 
			{
                count++;
            } else
			 {
                break; 
            }
        }
        
        printf("%d->%d, ", num, count);
        i += count; 
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
	{
        scanf("%d", &array[i]);
    }

    count(array, n);

    return 0;
}
