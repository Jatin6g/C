#include<stdio.h>
#include<conio.h>
int main()
{
    int num,digit;
    printf("enter a num:\n");
    scanf("%d",&num);
    printf("enter a digit:\n");
    scanf("%d",&digit);
    int c=num*10+digit;
    printf("append a num=%d",c);
    return 0;
}