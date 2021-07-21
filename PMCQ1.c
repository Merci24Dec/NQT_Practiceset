#include<stdio.h>
void main()
{
    int i;
    int sum=0;
    for(i=1;i<=4;i++)
    {
    sum=((i!=2^i!=3))?sum+i:sum-i;
    }
    printf("%d",sum);
}
//o/p
//0
