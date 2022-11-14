//SY12.3
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
    int i,a,n;
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
        int m;
        scanf("%d",&m);
        while(phead)
        {
            if(phead->data==m)
            {
                phead=phead->next;
                continue;
            }
            else {printf("%d  ",phead->data);phead=phead->next;}
        }
        printf("\n");
    }
    return 0;
}
