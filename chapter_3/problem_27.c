#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, k;
    int array[2][2][2];
    int(*parr)[2][2] = arr;
  
    printf("\n Enter the elements of a 2 x 2 x 2 array : ");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++)
                scanf("%d", &array[i][j][k]);
        }
    }

    printf("\n The elements of a 2 x 2 x 2 array : ");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++)
                printf(" %d", *(*(*(parr + i) + j) + k));
        }
    }
    getch();
    return 0;
}
