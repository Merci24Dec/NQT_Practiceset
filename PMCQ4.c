#include<stdio.h>
void func(){
    static int i=10;
    i=10+i;
    printf("%d\n",i);
}
void main(){
    int j;
    for(j=0;j<3;j++)
    func();
}
//o/p
/*
20

30

40
*/
