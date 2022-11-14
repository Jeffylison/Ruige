//SY11.3
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
int main()
{
    NODE *phead,*ptail,*pnew;
    int a,i,n=0;
    phead=(NODE *)malloc(sizeof(NODE));
    if(phead==NULL) exit(1);
    phead->next=NULL;
    ptail=phead;
    while(scanf("%d",&a)!=0)
    {
        if(a==0) break;
        pnew=(NODE *)malloc(sizeof(NODE));
        if(pnew==NULL) exit(1);
        pnew->data=a;
        pnew->next=NULL;
        ptail->next=pnew;
        ptail=pnew;
    }
    phead=phead->next;
    while(phead)
    {
        printf("%d  ",phead->data);
        phead=phead->next;
        n++;
    }
    printf("\n");
    printf("%d",n);
    return 0;
}
