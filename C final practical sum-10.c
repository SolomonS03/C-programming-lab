/* Create a structure Employee that should include the employee's
ID, their current salary, and the percentage raise they are to receive, then calculate and display
the new salary after the raise is applied. */
#include<stdio.h>
struct employee{
       int ID;
       float salary;
       float increment;
}e;
int main(){
    float new_salary;
    printf("Enter the employee ID: ");
    scanf("%d", &e.ID);
    printf("\nEnter the employee's salary: ");
    scanf("%f", &e.salary);
    printf("\nEnter the increment percentage: ");
    scanf("%f",&e.increment);
    new_salary = e.salary + (e.salary * e.increment/100.00);
    printf("\nThe ID if the employee is: %d",e.ID);
    printf("\nThe salary after increment is: %.2f",new_salary);
    return 0;




}
