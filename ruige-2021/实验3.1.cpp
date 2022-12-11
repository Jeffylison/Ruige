#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
void compare(int *pa,int *pb,int *pc)
{
    if(*pa>*pb) swap(pa,pb);
    if(*pa>*pc) swap(pa,pc);
    if(*pb>*pc) swap(pb,pc);
}
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        compare(&a,&b,&c);
        printf("%d %d %d",a,b,c);
    }
    return 0;
}
