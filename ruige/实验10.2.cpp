//SY10.2
#include <stdio.h>
#include <stdlib.h>
struct Date
{
    int year;
    int month;
    int day;
};
int main()
{
    struct Date x;
    int a,b,c,n,m=0;
    while(scanf("%d-%d-%d",&a,&b,&c)!=EOF)
    {
        x.year=a;
        x.month=b;
        x.day=c;
        n=a;
        m=0;
        for(a-=1; a>=2000; a--) //2004,++++.,2000
        {
            if(a%4==0)
                m+=366;
            else m+=365;
        }
        for(b-=1; b>=1; b--) //5
        {
            if(b==2&&n%4==0)
                m+=29;
            else if(b==2&&n%4!=0)
                m+=28;
            else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)//31
                m+=31;
            else m+=30;
        }
        m+=c;
        //printf("%d\n",m);
        if(m%5==4||m%5==0)
            printf("晒网\n");
        else printf("打鱼\n");
    }
    return 0;
}
