#include<stdio.h>
#include<conio.h>
int main()
{
    int  principal,rate,time, ci ;
    printf("enter a principal:");
    scanf("%d", & principal);
    printf("enter a rate:");
    scanf("%d",&rate);
    printf("enter a time:");
    scanf("%d",&time );
    ci = principal* (pow((1 + rate / 100), time)); 

    printf("%d", ci);
    return 0;
}