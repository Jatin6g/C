#include<stdio.h>
#include<conio.h>
int main()
{
    int a=4,b=10,c=5;
    int res=(a+=2,b+=3,c+=4);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("result=%d\n",res);
    return 0;
}