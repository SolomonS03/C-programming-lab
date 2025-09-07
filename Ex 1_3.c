// C program to find the age using only years:-
#include<stdio.h>
int main(){
   int age,pyear,byear;
   printf("Enter the present year: ");
   scanf("%d",&pyear);
   printf("\nEnter your birth year: ");
   scanf("%d",&byear);
   age = pyear - byear;
   printf("\n Age = %d",age);
   return 0;
}
