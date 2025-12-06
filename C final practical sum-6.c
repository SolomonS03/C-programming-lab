// To calculate the difference between the sum_of_elements in even rows and sum_of_elements in odd rows:-
// "In 2D ARRAY"
#include<stdio.h>
int main(){
    int i,j,m,n;
    int difference = 0,sum_of_even = 0,sum_of_odd = 0;
    printf("Enter the no.of rows and coulmns: ");
    scanf("%d %d", &m,&n);
    int arr[m][n];
    printf("\nEnter the elements one by one: ");
    for(i=0; i < m; i++){
        for(j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(i%2 == 0) sum_of_even += arr[i][j];
            else sum_of_odd += arr[i][j];
        }
    }
    difference = sum_of_even - sum_of_odd;
    printf("\nThe difference is: %d",difference);
    return 0;
}
