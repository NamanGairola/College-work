#include<stdio.h>
int main()
{
    int n,m,small,i;
    printf("Enter no. of input\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(i==0)
        {
            small=m;
        }
        else
        {
            if(small>m)
            {
                small=m;
            }
        }
    }
    printf("Smallest number is %d",small);
}