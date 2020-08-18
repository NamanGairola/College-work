#include<stdio.h>
int main()
{
    int i,j;
    char s[100];
    printf("Enter the string\n");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        j=s[i]+5;
        if(j>122)
        {
            j=j-26;
        }
        s[i]=j;
    }
    printf("String after Caesar cypher algorithm\n%s",s);
    return 0;
}