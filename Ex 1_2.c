//C program to convert fahrenheit into celsius:-
#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit-32)*5/9;
    printf("\nCelsius = %f",celsius);
    return 0;
}
