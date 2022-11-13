//SY2.3
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   char x;
   scanf("%d %c",&a,&x);
   if(a<=1000)
   {
switch(x)
{
    case'y':printf("%d",b=9);break;
    case'n':printf("%d",b=4);break;
}
   }
   if(a>1000&&a%500==0)
   {
switch(x)
{
    case'y':printf("%d",b=9+3*((a-1000)/500));break;
    case'n':printf("%d",b=4+3*((a-1000)/500));break;
 }
  }
   if(a>1000&&a%500!=0)
  {
      switch(x)
{
    case'y':printf("%d",b=9+3+3*((a-1000)/500));break;
    case'n':printf("%d",b=4+3+3*((a-1000)/500));break;
 }
  }

    return 0;
}
