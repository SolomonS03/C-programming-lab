//Digital root
#include<stdio.h>
int digitalroot(int n){
    if(n<10) return n;
    int sum = 0;
    while(n>0){
        sum += n % 10;
        n /= 10;
    }
    return digitalroot(sum);
}
int main(){
    int n;
    printf("Enter the number to find the digital root: ");
    scanf("%d", &n);
    int result = digitalroot(n);
    printf("\nThe digital root of the number is: %d",result);
    return 0;
}
