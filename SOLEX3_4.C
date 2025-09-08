#include<stdio.h>
#include<conio.h>
//Program to find the sum of Natural numbers,Odd numbers and Even numbers using while loop using user input in C language:-
void main(){
  int limit,s_natural=0,s_odd=0,s_even=0,i=1;
  clrscr();
  printf("Enter the limit: ");
  scanf("%d",&limit);
  while(i<=limit){
     s_natural += i;

     if(i%2==0){
	s_even += i;
	}

     else{
	s_odd += i;
	}
     i++;
     }

     printf("The sum of natural numbers upto %d: %d\n",limit,s_natural);
     printf("The sum of odd numbers upto %d: %d\n",limit,s_odd);
     printf("The sum of even numbers upto %d: %d\n",limit,s_even);
     getch();
     }