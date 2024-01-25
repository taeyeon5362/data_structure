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
        inform p1;
        printf("Student : ");
        gets(p1.student);
        printf("Roll Number : ");
        gets(p1.roll_number);
        printf("First Name : ");
        gets(p1.name.f_name);
        printf("Middle Name : ");
        gets(p1.name.m_name);
        printf("Last Name : ");
        gets(p1.name.l_name);
        printf("Sex : ");
        gets(p1.sex);
        printf("Birth Day : ");
        gets(p1.birth.day);
        printf("Birth Month : ");
        gets(p1.birth.month);
        printf("Birth Year : ");
        gets(p1.birth.year);
        printf("English Marks : ");
        gets(p1.marks.english);
        printf("Math Marks : ");
        gets(p1.marks.math);
        printf("Computer Science Marks : ");
        gets(p1.marks.computer);

        return p1;
}
int main() {
        inform p1;

        p1 = input();

        printf("--------------------------------------\n");
        printf("%s", p1.student);
        printf("%s", p1.roll_number);
        printf("%s%s%s", p1.name.f_name,p1.name.m_name, p1.name.l_name);
        printf("%s", p1.sex);
        printf("%s.%s.%s", p1.birth.year, p1.birth.month, p1.birth.day);
        printf("%s %s %s", p1.marks.english, p1.marks.math, p1.marks.computer);
}
