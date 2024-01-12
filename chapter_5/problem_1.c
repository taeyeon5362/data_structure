#include <stdio.h>
#include <stdlib.h>

int main() {
    struct student {
        int roll_no;
        char name[80];
        float fees;
        char DOB[80];
    }
    struct student stud1;

    system("cls");
    
    printf("\n Enter the roll number : ");
    scanf("%d", &stud1.roll_no);
    printf("\n Enter the name : ");
    scanf("%d", &stud1.name);
    printf("\n Enter the fees : ");
    scanf("%d", &stud1.fees);
    printf("\n Enter the DOB : ");
    scanf("%d", &stud1.DOB);

    printf("\n *******STUDENT'S DETAILS ******* ");
    printf("\n ROLL No. = %d", stud1.roll_no);
    printf("\n NAME = %s", stud1.name);
    printf("\n FEES = %f", stud1.fees);
    printf("\n DOB = %s", stud1.DOB);
    getch();
    
    return 0;
}
