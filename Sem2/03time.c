#include <stdio.h>
struct time
{
    int s;
    int m;
    int h;
};

void diff(struct time t1, struct time t2, struct time *d)
{
    if (t2.s>t1.s)
    {
        t1.m--;
        t1.s=t1.s+60;
    }
    d->s=t1.s-t2.s;
    if(t2.m>t1.m)
    {
        t1.h--;
        t1.m=t1.m+60;
    }
    d->m=t1.m-t2.m;
    d->h=t1.h-t2.h;
}
int main()
{
    struct time start, stop, d;
    printf("Enter start time: \n");
    scanf("%d %d %d", &start.h, &start.m, &start.s);
    printf("Enter stop time: \n");
    scanf("%d %d %d", &stop.h,&stop.m,&stop.s);
    diff(start,stop,&d);
    printf("\nTime Difference : %d:%d:%d - ",start.h,start.m,start.s);
    printf("%d:%d:%d ",stop.h,stop.m,stop.s);
    printf("= %d:%d:%d\n",d.h,d.m,d.s);
    return 0;
}