//C program for a math software:-
//Formula is d=(a+b)*c/5
#include<stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter the values of A, B and C: ");
    scanf("%d %d %d",&a,&b,&c);
    d = (a+b)*c/5;
    printf("The answer for the equation: %d",d);
    return 0;
}

