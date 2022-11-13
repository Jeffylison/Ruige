//SY3.1
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int na,n1,nk,n;
    na=n1=nk=n=0;
    char c;
    c=getchar();
    while(1)
    {
      if(c==EOF) break;
      else if(c>='a' && c<='z'||c>='A' && c<='Z')
      na++;
      else if(c>='0' && c<='9')
      n1++;
      else if(c==' ')
      nk++;
      else
      n++;
      c=getchar();
    }
    printf("num1=%d,num2=%d,num3=%d,num4=%d",na,n1,nk,n);
    return 0;
}
