#include<stdio.h>
#include<conio.h>
void main(){
     //C program to find whether the given number is amstrong or not:-
     int num , original, result = 0;
     printf("Enter a number to check whether it is an Amstrong number or not: ");
     scanf("%d",&num);
     while(num != 0){
	  num = num % 10;
	  result = result + num * num * num;
	  num = num / 10;
	  }
     if(original == result) printf("It's an amstrong number");
     else printf("It's not an Amstrong number");
     getch();
     }
