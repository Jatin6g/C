#include<stdio.h>
#include<conio.h>
int main()
{
    int num,last;
    printf("enter num:\n");
    scanf("%d",&num);
    last=num%10;
    num=num-last;
    printf("number=%d",num);
    return 0;
}