#include <stdio.h>

struct hotel {
        char name;
        char address;
        int grade;
};


------------수정필요----------------

void display(struct student*);

int main() {
        struct student* ptr;
        ptr = (struct student*)malloc(sizeof(struct student));
        printf("\n Enter the date for the students : ");
        printf("\n ROLL NO. : ");
        scanf("%d", &ptr->r_no);
        gets(ptr->name);
        printf("\n NAME = ");
        gets(ptr->name);
        printf("\n COURSE : ");
        gets(ptr->course);    
        printf("\n FEES : ");
        scanf("%d", &ptr->fees);
        display(ptr);
        getch();
        return 0;
}
void display(struct student* ptr){
    printf("\n DETAILS OF THE STUDENTS ");
    printf("\n ROLL NO. = %d", ptr->r_no);
    printf("\n NAME = %s", ptr->name);
    printf("\n COURSE = %s", ptr->course);
    printf("\n FEES = %d", ptr->fees);
}
