#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[5][3];
    int i,j,n;
    scanf("%d",&n);
    for(i=0; i<=4; i++)
        for(j=0; j<=2; j++)
            a[i][j]=' ';
    /*for(i=0; i<=4; i++)
    {
        for(j=0; j<=2; j++)
            printf("%c",a[i][j]);
        printf("\n");
    }*/
    if(n==2||n==3||n==5||n==6||n==7||n==8||n==9||n==0) a[0][1]='-';
    if(n==4||n==5||n==6||n==8||n==9||n==0) a[1][0]='|';
    if(n==2||n==3||n==1||n==4||n==7||n==8||n==9||n==0) a[1][2]='|';
    if(n==2||n==3||n==5||n==6||n==4||n==8||n==9) a[2][1]='-';
    if(n==2||n==6||n==8||n==0) a[3][0]='|';
    if(n==1||n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==0) a[3][2]='|';
    if(n==2||n==3||n==5||n==6||n==8||n==9||n==0) a[4][1]='-';
    for(i=0; i<=4; i++)
    {
        for(j=0; j<=2; j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
    return 0;
}
