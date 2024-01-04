#include <stdio.h>
#include <conio.h>

int main() {
    int sales[5][3], i, j, total_sales = 0;
    printf("\n ENTER THE DATA");
    printf("\n *************************");

    for(i = 0; i < 5; i++) {
        printf("\n Enter the saled of 3 items sold by salesman %d : ", i + 1);
        for(j = 0; j < 3; j++)
            scanf("%d", &sales[i][j]);
    }

    for(i = 0; i < 5; i++) {
        total_sales = 0;
        for(j = 0; j < 3; j++)
            total_sales += sales[i][j];
        printf("\n Total Sales By Saleman %d = %d", i + 1, total_sales);
    }

    for(i = 0; i < 3; i++) {
        total_sales = 0;
        for(j = 0; j < 5; j++)
            total_sales += sales[i][j];
        printf("\n Total Sales of item %d = %d", i + 1, total_sales);
    }
    getch();
    return 0;
}
