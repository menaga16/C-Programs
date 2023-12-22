#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[50];
    printf("Enter the string:");
    scanf("%s", str);

    for (int i=0;str[i]!='\0';i++) 
    {
        if (isdigit(str[i])) 
        {
            int count=str[i]-'0';
            for(int j=0;j<count;j++) 
            {
                printf("%c",str[i - 1]);
                
            }
        }
    }
    return 0;
}
