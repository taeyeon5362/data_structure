#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, k;
    int rows1, cols1, rows2, cols2, res_rows, res_cols;
    int mat1[5][5], mat2[5][5], res[5][5];

    printf("\n Enter the number of rows in the first matrix ");
    scanf("%d", &rows1);
    printf("\n Enter the number of columns in the first matrix ");
    scanf("%d", &cols1);
    printf("\n Enter the number of rows in the second matrix ");
    scanf("%d", &rows2);
    printf("\n Enter the number of columns in the second matrix ");
    scanf("%d", &cols2);

    if(cols1 != cols2) {
        printf("\n The number of colums in the first matrix must be equal to the number of rows in the second matrix");
        getch();
        exit();
    }

    rows_sum = rows1;
    cols_sum = cols1;
    
    printf("\n Enter the elements of the first matrix ");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\n Enter the elements of the second matrix ");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i = 0; i < res_rows; i++) {
        for(j = 0; j < res_cols; j++) {
            res[i][j] = 0;
            for(k = 0; k < res_cols; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    } 
  
    printf("\n The elements of the product matrix are ");
    for(i = 0; i < res_rows; i++) {
        printf("\n");
        for(j = 0; j < res_cols; j++) {
            printf("\t %d", sum[i][j]);
        }
    } 
    return 0;
}
