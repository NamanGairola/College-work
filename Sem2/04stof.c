#include <stdio.h>
struct student
{
    char name[20];
    int roll_no;
    float percent;
}rec;

void func(struct student a)
{
    printf(" Name : %s \n", a.name);
    printf(" Roll no : %d \n", a.roll_no);
    printf(" Percentage : %f \n", a.percent);
}

int main()
{
    printf("Enter the details of student : ");
    printf("Name : ");
    scanf("%s",&rec.name);
    printf("Roll no : ");
    scanf("%d",&rec.roll_no);
    printf("Percentage : ");
    scanf("%f",&rec.percent);

    func(rec);
    return 0;
}