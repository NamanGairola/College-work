#include<stdio.h>
struct employee
{
    char name[20],gen[5];
    int age,id;
    float salary;
}e;

void main()
{
    printf(" Enter details of employee \n name \n age \n id \n gen \n salary\n");
    scanf("%s%d%d%s%f",&e.name,&e.age,&e.id,&e.gen,&e.salary);

    printf("Name : %s",e.name);
    printf("\nAge : %d",e.age);
    printf("\nId : %d",e.id);
    printf("\nGen : %s",e.gen);
    printf("\nSalary : %f",e.salary);
}