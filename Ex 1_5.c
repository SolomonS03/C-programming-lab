// C program to find the total percentage and marks obtained by a student in a school's mark report generating system:-
#include<stdio.h>
int main(){
    int tam,eng,math,sci,soc,total;
    float percentage;
    printf("\nEnter the marks obtained in Tamil: ");
    scanf("%d",&tam);
    printf("\nEnter the marks obtained in English: ");
    scanf("%d",&eng);
    printf("\nEnter the marks obtained in Mathematics: ");
    scanf("%d",&math);
    printf("\nEnter the marks obtained in Science: ");
    scanf("%d",&sci);
    printf("\nEnter the marks obtained in Social Science: ");
    scanf("%d",&soc);
    total = tam + eng + math + sci + soc;
    percentage = total/5.0;
    printf("\n The total marks obtained by the student is: %d",total);
    printf("\n The percentage obtained by the student is: %f",percentage);
    return 0;
}
