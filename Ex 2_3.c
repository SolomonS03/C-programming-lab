// C program that uses a static variable to keep track of the number of bills printed in a electricity bill counter:-
#include<stdio.h>
int main(){
    static int bill = 0;
    bill += 1;
    printf("\nBill count after incrementing one time: %d",bill);
    bill += 1;
    printf("\nBill count after incrementing second time: %d",bill);
    bill += 1;
    printf("\nBill count after incrementing third time: %d",bill);
    return 0;
}
