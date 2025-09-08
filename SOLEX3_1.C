#include<stdio.h>
#include<conio.h>
void main(){
  //Program to check whether the given number is odd or even or zero
  int n;
  clrscr();
  printf("Enter a number: ");
  scanf("%d",&n);
  (n==0)?printf("The given number is Zero"):(n%2==0)?(printf("It is a even number")):(printf("It is odd number"));
  getch();
  }