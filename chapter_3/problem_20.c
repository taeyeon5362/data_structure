#include <stdio.h>
#include <conio.h>

int main() {
    int marks[3][3], i, j;
    clrscr();

    printf("\n Enter the elemnets of the matrix ");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n the elements of the matrix are ");
    for(i = 0; i < 3; i++) {
        printf("\n");
        for(j = 0; j < 3; j++) {
            printf("\t %d", mat[i][j]);
        }
    } 
    return 0;
}
