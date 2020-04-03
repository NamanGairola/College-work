#include<stdio.h>
struct shop
{
    char name[20],manufactured[10];
    int code,quantity;
    float price;
};

void main()
{
    int n;
    printf("Enter the no of products : ");
    scanf("%d",&n);
    struct shop s[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the details of product %d : \n",i+1);
        printf("Name : ");
        scanf("%s",&s[i].name);
        printf("Code : ");
        scanf("%d",&s[i].code);
        printf("Quantity : ");
        scanf("%d",&s[i].quantity);
        printf("Price : ");
        scanf("%f",&s[i].price);
        printf("Manufactured date in format dd/mm/yy : ");
        scanf("%s",&s[i].manufactured);
    }

     for(int i=0;i<n;i++)
    {
        printf("Details of Product %d : \n",i+1);
        printf("Name : %s\n",s[i].name);
        printf("Code : %d\n",s[i].code);
        printf("Quantity : %d\n",s[i].quantity);
        printf("Price : %f\n",s[i].price);
        printf("Manufactured on : %s\n",s[i].manufactured);
    }
}