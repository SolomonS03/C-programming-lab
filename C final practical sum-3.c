/* An employee at XYZ Company, needs to determine her final salary based on her total
hours worked. If Abiksha has worked 12 hours or more, then an amount of Rs. 150.00 increment
will be added to her salary; otherwise, no additional increment is added. */
// Using structure:-

#include<stdio.h>
struct emp_salary_details{
       float base_salary;
       int hours;
}a;

int main(){
    float final_salary;
    printf("Enter the total amount of time you worked: ");
    scanf("%d", &a.hours);
    printf("\nEnter your salary: ");
    scanf("%f", &a.base_salary);
    if(a.hours >= 12) final_salary = a.base_salary + 150.00;
    else final_salary = a.base_salary;
    printf("\nYour salary after over time calculation is: %.2f",final_salary);
    return 0;
}
