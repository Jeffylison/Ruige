//SY10.1
#include <stdio.h>
#include <stdlib.h>
struct students
{
    int mid;
    int end;
    int average;
};
int main()
{
    struct students score;
    while(scanf("%d%d",&score.mid,&score.end)!=EOF)
    {
    score.average=(score.mid+score.end)/2;
    printf("%d\n",score.average);
    }
    return 0;
}
