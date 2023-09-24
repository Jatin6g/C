#include<stdio.h>
#include<conio.h>
int main()
{
    int  principal,rate,time, interest ;
    printf("enter a principal");
    scanf("%d", & principal);
    printf("enter a rate");
    scanf("%d",&rate);
    printf("enter a time");
    scanf("%d",&time );
    interest= principal * rate * time / 100;
    printf("%d", interest);
    return 0;
}