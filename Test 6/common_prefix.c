#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 50

void minimum(char s[][50], int n);
void swap(char a[], char b[]);

void Prefix(char s[][50], int n) 
{
    minimum(s, n);
    int c,i,len=strlen(s[0]);
    char first[MAX_LENGTH];
    strcpy(first, s[0]);
    char last[MAX_LENGTH];
    strcpy(last, s[n-1]);
    
    
    for (c=0;c<len;c++,i++) 
    {
        if (first[i]!=last[i]) 
        {
            break;
        }
    }

    if (c!=0) 
    {
        printf("Longest Common Prefix: ");
        for (int k=0;k<c;k++)
        {
            printf("%c",first[k]);
        }
    } 
    
    else
    {
    printf("There is no common prefix!!");
    }
}

void minimum(char s[][50], int n) 
{
    for (int i=0;i<n-1;i++) 
    {
        for (int j=0;j<n-i-1;j++) 
        {
            if (strcmp(s[j],s[j+1])>0) 
            {
                swap(s[j],s[j+1]);
            }
        }
    }
}

void swap(char a[], char b[]) 
{
    char temp[MAX_LENGTH];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}

int main() 
{
    int n=0;
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    char string[n][50];
    for (int i=0;i<n;i++) 
    {
        printf("Enter the String %d:",i+1);
        scanf("%s",string[i]);
    }
    Prefix(string,n);
    return 0;
}