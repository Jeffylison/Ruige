#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
int main()
{
    NODE *phead,*pnew;
    int i,a,n;
    phead=(NODE *)malloc(sizeof(NODE));
    if(phead==NULL) exit(1);
    phead->next=NULL;
    while(scanf("%d",&n)!=EOF)
    {
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
        while(phead)
        {
            printf("%d  ",phead->data);
            phead=phead->next;
        }
    }
    return 0;
}
