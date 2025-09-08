#include<stdio.h>
#include<conio.h>
//C program to calculate the factorial of a number using Do-While loop:-
void main(){
   int n,f=1,i=1;
   /*n = number to calculate factorial
     f = Factorial*/
     clrscr();
     printf("Enter the number to find the factorial of that number: ");
     scanf("%d",&n);
     do{
      f=f*i;
      i++;
      }while(i<=n);

      printf("The factorial value of %d: %d",n,f);
      getch();
      }
