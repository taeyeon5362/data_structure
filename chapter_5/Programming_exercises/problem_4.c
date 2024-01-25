#include <stdio.h>
#define max 30

typedef struct information {
        char student[max];
        char roll_number[max];
        struct Name {
              char f_name[max];
              char m_name[max];
              char l_name[max];
        }name;
        char sex[max];
        struct Birth {
              char day[max];
              char month[max];
              char year[max];
        }birth;
        struct Marks {
              char english[max];
              char math[max];
              char computer[max];
        }marks;
}inform;

inform input() {
        inform temp;
  
        printf("Student : ");
        scanf("%s", temp.student)
        printf("Roll Number : ");
        scanf("%s", temp.roll_number);
        printf("First Name : ");
        scanf("%s", temp.name.f_name);
        printf("Middle Name : ");
        scanf("%s", temp.name.m_name);
        printf("Last Name : ");
        scanf("%s", temp.name.l_name);
        printf("Sex : ");
        scanf("%s", temp.sex);
        printf("Birth Day : ");
        scanf("%s", temp.birth.day);
        printf("Birth Month : ");
        scanf("%s", temp.birth.month);
        printf("Birth Year : ");
        scanf("%s", temp.birth.year);
        printf("English Marks : ");
        scanf("%s", temp.marks.english);
        printf("Math Marks : ");
        scanf("%s", temp.marks.math);
        printf("Computer Science Marks : ");
        scanf("%s", temp.marks.computer);

        return temp;
}
int main() {
        inform temp[max];
        int menu = 0, num = 0;

        do {
                printf("1. input\n2. display\n3. exit\n");
                printf("input : ");
                scanf("%d", &menu);
      
                if(menu == 1) {
                        temp[num] = input();
                        num++;
                }
                else if(menu == 2) {
                        printf("--------------------------------------\n");
                        for(int i = 0; i < num; i++) {
                                printf("%s", temp[i].student);
                                printf("%s", temp[i].roll_number);
                                printf("%s%s%s", temp[i].name.f_name, temp[i].name.m_name, temp[i].name.l_name);
                                printf("%s", temp[i].sex);
                                printf("%s.%s.%s", temp[i].birth.year, temp[i].birth.month, temp[i].birth.day);
                                printf("%s %s %s \n", temp[i].marks.english, temp[i].marks.math, temp[i].marks.computer);
                        }
                }
                else if(menu == 3) {
                        return 0;
                }
        } while(1);

}
