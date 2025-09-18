#include<stdio.h>
#include<conio.h>
int main(){
    //C program to reverse a number and to check whether it is Palindrome or not:-
    int original,i,rev_num = 0;
    clrscr();
    printf("Enter a number: ");
    scanf("%d",&original);
    while(i!=0){
	 i = original % 10;
	 rev_num = rev_num * 10 + i;
	 original = original / 10;
	 }
    printf("The reversed number is: %d",rev_num);
    if(original == rev_num) printf("It's a Palindrome number");
    else print("It's not a Palindrome number");
    getch();
    }