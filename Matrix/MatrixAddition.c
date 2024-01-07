#include <stdio.h>

int main(){
    int a,b;
    printf("Please enter the number of rows for the matrices: \n");
    scanf("%d" ,&a);
    printf("Please enter the number of columns for the matrices: \n");
    scanf("%d" ,&b);
    int A[a][b];
    int i,j;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            printf("Please enter the element of array: \n");
            scanf("%d" ,&A[i][j]);
        }
    }
    int B[a][b];
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            printf("Please enter the element of array: \n");
            scanf("%d" ,&B[i][j]);
        }
    }
    int sum[a][b];
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            printf("[%d] " ,sum[i][j]);
        }
        printf("\n");
    }
}
