//C program for the demonstration of static and extern variable:-
#include<stdio.h>
int global = 316;
int main(){
    static int n = 1;
    printf("Static variable initially: %d",n);
    n +=20;
    printf("\n Static variable after first modification: %d",n);
    n *=2;
    printf("\n Static variable after second modifiaction: %d",n);
    extern int global;
    printf("\n Extern accessed global variable: %d",global);
    return 0;
}
