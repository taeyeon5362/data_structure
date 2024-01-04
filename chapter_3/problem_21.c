#include <stdio.h>
#include <conio.h>

int main() {
    int marks[3][3], i, j, transposed_mat[3][3];
    clrscr();

    printf("\n Enter the elemnets of the matrix ");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n The elements of the matrix are ");
    for(i = 0; i < 3; i++) {
        printf("\n");
        for(j = 0; j < 3; j++) {
            printf("\t %d", mat[i][j]);
        }
    } 

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            transposed_mat[i][j] = mat[i][j];
        }
    } 
    printf("\n The elements of the transposed matrix are ");
    for(i = 0; i < 3; i++) {
        printf("\n");
        for(j = 0; j < 3; j++) {
            printf("\t %d", transposed_mat[i][j]);
        }
    } 
    return 0;
}
