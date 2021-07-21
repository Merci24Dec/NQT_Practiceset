#include<stdio.h>
int main()
{
    int a=3;
    switch(a)
    {
        case a: printf("1");//invalid case
                break;
        case'a':printf("2");
                break;
        case 3:printf("3");
        }
}
