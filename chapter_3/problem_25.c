#include <stdio.h>
#include <conio.h>

void display(int(*)[3]);

int main() {
    int i, j, mat[3][3];
    printf("\n Enter the elements of the matrix");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            scanf("%d", mat[i][j]);
    }
    display(mat);
    return 0;
}
void display(int(*mat)[3]) {
    int i, j;
    printf("\n The elements of the matrix are ");
    for(i = 0; i < 3; i++) {
        print("\n");
        for(j = 0; j < 3; j++) {
            printf("\t %d", *(*(mat + i) + j));
        }
    }
}
