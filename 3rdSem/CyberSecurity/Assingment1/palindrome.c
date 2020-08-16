#include<stdio.h>
#include<string.h>
int main()
{
    int i,check=0,l;
    char str[100];
    printf("Enter the string:\n");
    scanf("%s",str);
    l=strlen(str)-1;
    for(i=0;i<=l/2;i++)
    {
        if(str[i]!=str[l-i])
        {
            check=1;
            break;
        }
    }
    if(check==0)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
    return 0;
}