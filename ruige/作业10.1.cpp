//ZY10.1
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
int main()
{
    NODE *phead,*ptail,*pnew,*p;
    int i,a,n,m;
    while(scanf("%d",&n)!=EOF)
    {
        phead=(NODE *)malloc(sizeof(NODE));
        if(phead==NULL) exit(1);
        p=(NODE *)malloc(sizeof(NODE));
        phead->next=NULL;
        ptail=phead;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            pnew=(NODE *)malloc(sizeof(NODE));
            pnew->data=a;
            pnew->next=NULL;
            ptail->next=pnew;
            ptail=pnew;
        }
        scanf("%d",&m);
        ptail=phead;
        while(ptail)
        {
            p=ptail;
            ptail=ptail->next;
            if(ptail->data>m)
            {
                pnew=(NODE *)malloc(sizeof(NODE));
                pnew->data=m;
                pnew->next=p->next;
                p->next=pnew;
                break;
            }
        }
        phead=phead->next;
        while(phead)
            {
                printf("%d  ",phead->data);
                phead=phead->next;
            }
    }
    return 0;
}
