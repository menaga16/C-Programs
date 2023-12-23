#include <stdio.h>
#include <string.h>

char letter[10][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void letters(char digits[],int index,char current[],char results[][100],int *finalsize) 
{
    if(index==strlen(digits)) 
    {
        strcpy(results[*finalsize],current);
        *finalsize+=1;
        return;
    }

    int digit=digits[index]-'0';
    
    for(int i=0;letter[digit][i]!='\0';i++) 
    {
        current[index]=letter[digit][i];
        letters(digits,index + 1,current,results,finalsize);
    }
}

void combinations(char digits[], char results[][100], int *size) 
{
    *size=0;
    if(strlen(digits)==0) 
    {
        return;
    }

    char current[100];
    memset(current,'\0', sizeof(current)); 
    letters(digits,0,current,results,size);
}

int main() 
{
    char digits[20];

    printf("Enter a string(combination of digits from 2 to 9):");

   for(int i=0;i<100;i++) 
    {
    digits[i]=getchar();
    if (digits[i]=='\n') 
    {
        digits[i]='\0';
        break;
    }
    }

    int max=1;
    for(int i=0;digits[i]!='\0';i++) 
    {
        max*=strlen(letter[digits[i]-'0']);
    }

    char results[max][100];
    int Size=0;
    combinations(digits,results,&Size);

    if(Size>0) 
    {
        printf("Combination of letters:\n");
        for(int i=0;i<Size;i++) 
        {
            printf("%s, ",results[i]);
        }
    } 
    else 
    {
        printf("No letter combinations found.");
    }

    return 0;
}
