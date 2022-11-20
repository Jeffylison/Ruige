//ZY10.2
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;
int main()
{
    NODE *phead,*ptail,*pnew;
    int n,i,a,t,r=0;
    while(scanf("%d",&n)!=EOF)
    {
        phead=(NODE *)malloc(sizeof(NODE));
        if(phead==NULL) exit (1);
        phead->next=NULL;
        ptail=phead;
        for(i=0; i<n; i++)
        {
            pnew=(NODE *)malloc(sizeof(NODE));
            scanf("%d",&a);
            pnew->data=a;
            pnew->next=NULL;
            ptail->next=pnew;
            ptail=pnew;
        }
        scanf("%d",&t);
        NODE *Search(phead,t,r);
    }
    return 0;
}
NODE *Search(NODE *phead,int no,int w)
{
    phead=phead->next;
    while(phead!=NULL)
    {
        if(phead->data==no)
        {
            printf("%d\n",w+1);
            printf("%d\n",no);
            return 0;
        }
        else {w++;phead=phead->next;}
        //printf("%d  ",p->data);
        //p=p->next;
    }
    printf("0\n");
    printf("NULL\n");
    return 0;
}
