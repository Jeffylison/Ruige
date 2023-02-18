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
    int m=0,n;
    while(scanf("%d-%d-%d",&x.year,&x.month,&x.day)!=EOF)
    {
        n=x.year;
        m=0;
        for(x.year-=1; x.year>=2000; x.year--) //2004,++++.,2000
        {
            if(x.year%4==0)
                m+=366;
            else m+=365;
        }
        for(x.month-=1; x.month>=1; x.month--) //5
        {
            if(x.month==2&&n%4==0)
                m+=29;
            else if(x.month==2&&n%4!=0)
                m+=28;
            else if(x.month==1||x.month==3||x.month==5||x.month==7||x.month==8||x.month==10||x.month==12)//31
                m+=31;
            else m+=30;
        }
        m+=x.day;
        //printf("%d\n",m);
        if(m%5==4||m%5==0)
            printf("晒网\n");
        else printf("打鱼\n");
    }
    return 0;
}
