#include<stdio.h>
#include<string.h>
struct student                                             
{
   char name[20];
   int marks;
};
int main()
{
    struct student s1,s2,s3;
    printf("Enter details of two students\n");
    scanf("%s %d %s %d",&s1.name,&s1.marks,&s2.name,&s2.marks);
    strcpy(s3.name,s1.name);
    s3.marks=s1.marks;
    if(s1.marks==s2.marks)
    {
        printf("Student 1 and student 2 have same marks\n");
    }
    else
    {
       printf("Student1 and student2 don't have same marks\n");
    }
    printf("Copyied value is :\n");
    printf("%s %d",s3.name,s3.marks);
    return 0;  
}                                                                
