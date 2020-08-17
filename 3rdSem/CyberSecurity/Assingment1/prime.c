#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,l,check=0;
    printf("Enter range\n");
    scanf("%d%d",&a,&b);
    printf("Prime number in range are\n");
    for(;a<=b;a++)
    {
        check=0;
        l=sqrt(a);
        for(i=2;i<=l;i++)
        {
            if(a%i==0)
            {
                check=1;
                break;
            }
        }
        if(a==2)
        {
            check=0;
        }
        else if(a==0 || a==1)
        {
            check=1;
        }
        if(check==0)
        {
            printf("%d ",a);
        }
    }
    return 0;
}