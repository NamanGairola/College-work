#include<stdio.h>
struct student
{
    char name[20];
    int roll_no,marks;
}s[5];

void main()
{
    for(int i=0;i<5;i++)
    {
        printf("Enter the details of Student %d : \n",i+1);
        printf("Name : ");
        scanf("%s",&s[i].name);
        printf("Roll no : ");
        scanf("%d",&s[i].roll_no);
        printf("Marks : ");
        scanf("%d",&s[i].marks);
    }
     for(int i=0;i<5;i++)
    {
        printf("Details of Student %d : \n",i+1);
        printf("Name : %s\n",s[i].name);
        printf("Roll no : %d\n",s[i].roll_no);
        printf("Marks : %d\n",s[i].marks);
    }
}