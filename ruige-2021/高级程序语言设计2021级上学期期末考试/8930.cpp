#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int stat(char a[],char c)
{ //统计数组a中字符c的个数
  //start
  int i,m=0;
  for(i=0;a[i]!='\0';i++)
    if(a[i]==c) m++;
  return m;
  //end
}
int main()
{
    char a[100],c;
    int n;
    while(scanf("%s %c",a,&c)!=EOF)
    {
        n=stat(a,c);
        printf("%d\n",n);
    }
    return 0;
}
