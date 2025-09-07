//C program for a library software system needs scenario:-
#include<stdio.h>
int late_fee = 100;
int main(){
    auto int book_id = 16;
    printf("Temporary book ID = %d\n", book_id);
    static int books = 20;
    printf("Number of books issued = %d\n",books);
    register int student_id = 68016;
    printf("Student's ID = %d\n",student_id);
    extern int late_fee;
    printf("Late fees = %d\n", late_fee);
    return 0;
}
