#include<stdio.h>

int main()
{
int x,y;
    printf("enter a number x:");
    scanf("%d",&x);
    printf("enter a number y:");
    scanf("%d",&y);
    x= x^y;
    y=x^y;
    x=x^y;
    printf("x=%d  swap tha number y=%d",x,y);
    return 0;
}