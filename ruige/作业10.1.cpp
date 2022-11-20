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
    NODE *phead,*ptail,*pnew;
    int i,n,a,m;
    while(scanf("%d",&n)!=EOF)
    {
        phead=(NODE *)malloc(sizeof(NODE));
        if(phead==NULL) exit(1);
        phead->next=NULL;
        ptail=phead;
        for(i=0;i<n;i++)
        {
            pnew=(NODE *)malloc(sizeof(NODE));
            if(pnew==NULL) exit(1);
            scanf("%d",&a);
            pnew->data=a;
            pnew->next=NULL;
            ptail->next=pnew;
            ptail=pnew;
        }
        /*phead=phead->next;
        while(phead)
        {
            printf("%d ",phead->data);
            phead=phead->next;
        }
        printf("\n");*/
        scanf("%d",&m);
        NODE *p,*q;
        q=phead;
        p=phead->next;
        while(1)
        {
            if(p->data>m)
            {
                pnew=(NODE *)malloc(sizeof(NODE));
                pnew->data=m;
                pnew->next=p;
                q->next=pnew;
                break;
            }
            else if(p->next==NULL)
            {
                pnew=(NODE *)malloc(sizeof(NODE));
                pnew->data=m;
                pnew->next=NULL;
                p->next=pnew;
                break;
            }
             else {q=p;p=p->next;}
        }
        phead=phead->next;
        while(phead)
        {
            printf("%d  ",phead->data);
            phead=phead->next;
        }
        printf("\n");
    }
    return 0;
}
