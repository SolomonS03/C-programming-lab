/*Program to normalize the scores of the students in a university with their
 midterm and final scores*/
//Using call by reference
#include<stdio.h>
void normalize_scores (int *a, int *b){
    int min = (*a < *b) ? *a : *b;
    *a = *a - min;
    *b = *b - min;
}
int main(){
    int midterm_scores,final_scores;
    printf("Enter the midterm scores followed by final scores: ");
    scanf("%d %d", &midterm_scores, &final_scores);
    normalize_scores(&midterm_scores,&final_scores);
    printf("\nThe normalized midterm scores : %d",midterm_scores);
    printf("\nThe normalized final scores : %d",final_scores);
    return 0;
}
