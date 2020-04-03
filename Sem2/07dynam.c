#include<stdio.h>
#include<malloc.h>
struct student
{
    int marks;
    char name[20];
};
int main() {
    struct student *ptr;
    int i,n;
    printf("Enter the number of students ");
    scanf("%d", &n);
    printf("Enter data\n");
    ptr=(struct student *)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    {
        scanf("%s %d",&(ptr+i)->name,&(ptr+i)->marks);
    }

    printf("Stored data\n");
    for(i=0;i<n;i++)
    {
        printf("%s %d\n",(ptr+i)->name,(ptr+i)->marks);
    }
    return 0;
}