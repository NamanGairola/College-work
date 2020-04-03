#include<stdio.h>
struct student
{
    char name[20];
    int age;
};
int main(){
    int n,i;
    printf("Enter how many students info to store :");
    scanf("%d",&n);
    struct student arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i].age);
        scanf("%s",arr[i].name);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i].age);
        printf("%s\n",arr[i].name);
    }
    return 0;
}