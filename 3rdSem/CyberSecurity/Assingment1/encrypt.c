#include<stdio.h>
int main()
{
    int i,j,k=1;
    char s[100];
    printf("Enter string\n");
    scanf("%s",s);
    printf("String after encryption\n");
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a')
        {
            j=s[i]-96;
        }
        else
        {
            j=s[i]-64;
        }
        if(k%2==1)
        {
            while(j--)
            {
                printf("#");
            }
        }
        else
        {
            while(j--)
            {
                printf("$");
            }
        }
        k++;
    }
    return 0;
}