#include<stdio.h>
#include<conio.h>

void main()
{ 
   int marks;
   printf("enter the marks:");
   scanf("%d",&marks);
   if(marks <= 30)
  {
    printf("c");
  }
   else if(marks >= 30 && marks <50)
  {
      printf("b");
    }
     else if(marks >= 50 && marks < 80)
    {  
     printf("a");
    }
    else if(marks >= 80 && marks < 90)
    {
      printf("a+");
    }
    else 
    {
    printf("a++");
    }
    getch();
    }