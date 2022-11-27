#include <stdio.h>
#include <stdlib.h>
#define LEN 100
int main(void)
{
    char one[LEN],the_other[LEN];  //one用于存储原串；the_other用于存储匹配串
    int i,j;
    gets(one);
    i=0, j=0;
    while(one[i]!='\0')
    {
       //start
       if(one[i]=='A') the_other[j]='T';
       else if(one[i]=='T') the_other[j]='A';
       else if(one[i]=='G') the_other[j]='C';
       else if(one[i]=='C') the_other[j]='G';
       i++;j++;
       //end
    }
    the_other[j] = '\0';
    puts(the_other);
    return 0;
}
