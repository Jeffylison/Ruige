//SY12.2
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
int main()
{
    NODE *phead,*pnew;
    int i,a,n,m=0;
    while(scanf("%d",&n)!=EOF)
    {
        phead=(NODE *)malloc(sizeof(NODE));
        if(phead==NULL) exit(1);
        phead->next=NULL;
        for(i=0;i<n;i++)
        {
            pnew=(NODE *)malloc(sizeof(NODE));
            if(pnew==NULL) exit(1);
            scanf("%d",&a);
            pnew->data=a;
            pnew->next=phead->next;
            phead->next=pnew;
        }
        phead=phead->next;
        m=0;
        while(phead)
        {
            //printf("%d  ",phead->data);
            if(phead->data%2==0) {printf("%d  ",phead->data);m++;}
            phead=phead->next;
        }
        printf("\n");
        printf("%d\n",m);
    }
    return 0;
}
