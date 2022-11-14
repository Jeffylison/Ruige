//SY11.2
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
    int n,i,a;
    while(scanf("%d",&n)!=EOF)
    {
        phead=(NODE *)malloc(sizeof(NODE));
        if(phead==NULL) exit (1);
        phead->next=NULL;
        for(i=0;i<n;i++)
            {
                pnew=(NODE *)malloc(sizeof(NODE));
                scanf("%d",&a);
                pnew->data=a;
                pnew->next=phead->next;
                phead->next=pnew;
            }
        phead=phead->next;
        while(phead!=NULL)
        {
            printf("%d  ",phead->data);
            phead=phead->next;
        }
        printf("\n");
    }
    return 0;
}
