#include<stdio.h>
#include<conio.h>
//Program for calculating electricity bill for a consumer using C language :-
void main(){
  int units,amount;
  clrscr();
  printf("Enter the total number of units consumed: ");
  scanf("%d",&units);
  if(units<=100){
     amount = units*5;
     }
  else if(units>100 && units<=300){

     amount = 100*5 + (units-100)*7;
     }
  else {
     amount = 100*5 + 200*7 + (units-300)*10;
     }
  printf("\nThe amount to be paid is: Rs.%d",amount);
  getch();
  }