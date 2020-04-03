#include <stdio.h>
struct complex 
{
    float r;
    float i;
};
void add(struct complex n1, struct complex n2,struct complex *res)
{
    struct complex temp;
    res->r = n1.r + n2.r;
    res->i = n1.i + n2.i;
}
int main() {
    struct complex n1, n2, res;
    printf("Enter 1st complex number \n");
    scanf("%f %f", &n1.r, &n1.i);
    printf("\nEnter 2nd complex number \n");
    scanf("%f %f", &n2.r, &n2.i);
    add(n1, n2,&res);
    printf("Sum = %f + %fi", res.r, res.i);
    return 0;
}