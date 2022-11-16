//ZY9.2
 #include <stdio.h>
 #include <stdlib.h>
int main()
{
    int x,y;
    long z;
    long IntPower(int base,int exp);
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        z=IntPower(x,y);
        printf("%ld\n",z);
    }
    return 0;
}
 //start 
 long IntPower(base,exp)
{
    int sum=1;
    for(exp;exp>0;exp--)
        sum*=base;
    return sum;
}

 //end
