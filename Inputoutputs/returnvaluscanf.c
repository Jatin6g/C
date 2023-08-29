#include<stdio.h>

int main()
{ 
int a ,b,c;
    printf("Enter three Numbers =");
    int returnValueOfScanf =  scanf("%d%d%d",&a,&b,&c); 

    printf("\nReturn Value of scanf() = %d",returnValueOfScanf); 

   
    return 0;
}