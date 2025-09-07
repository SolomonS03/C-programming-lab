//C program to display name and age using user input:-

#include<stdio.h>
#define NAME"Solomon S"
int main(){
  int age;
  printf("\nEnter your age: ");
  scanf("%d",&age);
  printf("\n_____Profile_____\n");
  printf("\nYour name: %s",NAME);
  printf("\nYour age: %d",age);
  return 0;
}
