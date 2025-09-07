//C program to swap two values using a third variable:-
//a= 1st value, b = 2nd value from user input.
#include<stdio.h>
int main(){
  int a,b,temp;
  printf("Enter any two values: ");
  scanf("%d %d",&a,&b);
  temp = a;
  a = b;
  b = temp;
  printf("\nThe swapped value of 'a' is: %d",a);
  printf("\nThe swapped value of 'b' is: %d",b);
  return 0;
}

