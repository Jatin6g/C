#include<stdio.h>

int main()
{
    int num;
    printf("enter a num.");
    scanf("%d",&num);
    if(num & 1) {

        printf("lab is %d= 1",num);
    }
    else {
        printf("lsb is %d =0",num);
    }
    return 0;
}