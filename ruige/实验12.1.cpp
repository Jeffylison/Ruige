//SY12.1
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
    int a,i,n,m;
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
        phead=phead->next;
        scanf("%d",&m);
        int t=0;
        while(phead)
        {
            if(m==phead->data)
                break;
            else {t++;ptail=phead;phead=phead->next;}
        }
        if(t==0) printf("%d没有前驱\n",m);
        else if(t==n) printf("%d不存在\n",m);
        else printf("%d\n",ptail->data);
    }
    return 0;
}
