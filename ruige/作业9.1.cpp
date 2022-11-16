//ZY9.1
  #include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    long long  func(int n);
    while(scanf("%d",&n)!=EOF)
    {
      printf("%lld\n",func(n));
    }
    return 0;
}
//start 
long long func(n)
{
    int sum=1;
    for(n;n>0;n--)
        sum*=n;
    return sum;
}

//end
