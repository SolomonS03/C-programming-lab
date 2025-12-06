/* The program prompts for the number of measurements and their respective values. It also takes
two integers, L and R, to define the acceptable range. The program then determines and outputs
the count of measurements falling outside this range. */
// To find the numbers falling outside the left and right range:-

#include<stdio.h>
int main(){
    int n,i,l,r;
    int out_of_range = 0;
    printf("Enter the count of numbers to be entered: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the numbers one by one: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter the left and right side limit for the range: ");
    scanf("%d %d", &l,&r);
    for(i=0; i<n; i++){
        if(arr[i] < l || arr[i] > r)
            out_of_range++;
    }
    printf("\nThe no.of numbers outside the range are: %d",out_of_range);
    return 0;
}
