#include <stdio.h>
#include <conio.h>

int main() {
    int marks[5][3], i, j, max_marks;

    for(i = 0; i < 5; i++) {
        printf("\n Enter the marks obtained by student %d : ", i + 1);
        for(j = 0; j < 3; j++) {
            printf("\n marks[%d][%d] = ", i, j);
            scanf("%d", &marks[i][j]);
        }
    }
  
    for(i = 0; i < 3; i++) {
        max_marks = -999;
        for(j = 0; j < 5; j++) {
            if(marks[i][j] > max_marks)
                max_marks = marks[i][j];
        }
        printf("\n The highest marks obtained in the subject %d = %d ", j + i, max_marks);
    }  
    getch();
    return 0;
}
