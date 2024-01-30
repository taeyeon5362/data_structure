#include <stdio.h>

struct hotel {
        char name;
        char address;
        int grade;
        int roomnumber;
        int charge;
}HOTEL[20];
void grading(int num);
void charging(int num);

int main() {
        int n = 0;
        scanf("%d", &n);

        for(int i = 0; i < n; i++) {
                printf("\n Enter the hotel name : ");
                gets(HOTEL[i].name);
                printf("\n Enter the hotel address : ");
                gets(HOTEL[i].address);
                printf("\n Enter the hotel grade : ");
                gets(HOTEL[i].grade);
                printf("\n Enter the hotel room number: ");
                gets(HOTEL[i].roomnumber);
                printf("\n Enter the hotel name : ");
                gets(HOTEL[i].charge);
        }
        grading(n);
        charging(n);
}
void grading(int num) {
        int par_grade = 0;
        scanf("%d", &par_grade);
        for(int i = 0; i < num; i++) {
                if(HOTEL[i].grade == par_grade)
                        printf("%s\n", HOTEL[i].name);
        }
}
void charging(int num){
        int par_charge = 0;
        scanf("%d", &par_charge);
        for(int i = 0; i < num; i++) {
                if(HOTEL[i].vharge == par_charge)
                        printf("%s\n", HOTEL[i].name);
        }
}
