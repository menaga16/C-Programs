#include <stdio.h>
#include <string.h>
void check_anagrams(char c[],char d[]) 
{
    char temp,e[20],f[20];
    strcpy(e, c); 
    strcpy(f, d);
    int len_c = strlen(c);
    int len_d = strlen(d);
    int result = 1;

    if (len_c!=len_d) 
    {
        result=0;
    }

    for (int i=0; i<len_c-1;i++) 
    {
        for (int j=i+1;j<len_c;j++) 
        {
            if (c[i]>c[j]) 
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
            if (d[i]>d[j]) 
            {
                temp=d[i];
                d[i]=d[j];
                d[j]=temp;
            }
        }
    }

    if (strcmp(c,d)==0&&result==1) 
    {
        printf("The strings '%s'and '%s' are anagrams.\n",e,f);
    } 
    else if (result==0) 
    {
        printf("The strings '%s'and '%s' are not anagrams.\n",e,f);
    }
    else
    {
        printf("The strings'%s'and '%s' are not anagrams.\n",e,f);
    }
}

int main() 
{
    char a[20],b[20];

    printf("Enter the first string:");
    scanf("%s",a);

    printf("Enter the second string:");
    scanf("%s", b);

    check_anagrams(a,b);
    return 0;
}
