//C program to swap two values without using a third variable:-

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter any two values for swapping: ");
    scanf("%d %d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n The swapped value of 'a' and 'b' are: %d and %d",a,b);
    return 0;
}

/* a = 2, b = 3
   a = 2 + 3 = 5
   b = a - b = 5 - 3 = 2
   a = a - b = 5 - 2 = 3
  So, now a=3 and b=2. */
