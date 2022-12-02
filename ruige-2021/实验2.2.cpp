#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(void)
{
   void transfor(int a[][N]);
   int array[N][N],i,j;
   for(i=0;i<N;i++)
      for(j=0;j<N;j++)
         scanf("%d",&array[i][j]);
   transfor(array);
   for(i=0;i<N;i++)
      for(j=0;j<N;j++)
         j!=N-1?printf("%d ",array[i][j]):printf("%d\n",array[i][j]);
    return 0;
}
void transfor(int a[][N])
{
//start
    int i,j,t;
    for(i=0;i<N;i++)
        for(j=0;j<i;j++)
            t=a[i][j],a[i][j]=a[j][i],a[j][i]=t;
//end
}
