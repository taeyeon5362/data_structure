#include <stdio.h>
#define max 30
typedef struct information {
        char name[max];
        struct english {
              int marks;
              char grade[max];
        }eng;
        struct math {
              int marks;
              char grade[max];
        }math;
        struct computer {
              int marks;
              char grade[max];
        }com;
}stu;

stu input() {
        stu p1;
  
        printf("name : ");
        scanf("%s", p1.name);
        printf("English Marks : ");
        scanf("%d", p1.eng.marks);
        printf("English grade : ");
        scanf("%s", p1.eng.grade);
        printf("Math Marks : ");
        scanf("%d", p1.math.marks);
        printf("Math grade : ");
        scanf("%s", p1.math.grade);
        printf("Computer Marks : ");
        scanf("%d", p1.com.marks);
        printf("Computer grade : ");
        scanf("%s", p1.marks.com.grade);

        return p1;
}
int main() {
        int menu = 0, num = 0, sum = 0;
        int total[max] = { 0 };
        stu p1[max];

        do {
                printf("1. input\n2. display\n3. exit\n");
                printf("input : ");
                scanf("%d", &menu);

                if(menu == 1) {
                        p1[num] = input();
                        num++;
                }
                else if(menu == 2) {
                        for(int i = 0; i < num; i++) {
                                total[i] = p1[i].eng.marks +p1[i].math.marks + p1[i].com.marks;
                        }
                        for(int i = 0; i < num; i++) {
                                sum += total[i];
                        }
                        for(int i = 0; i < num; i++) {
                                if(sum / (num) * .4 > tatal[i] {
                                        printf("%s\n", p1[i].name);
                                }
                        }
                }
                else if(menu == 3) {
                        return 0;
                }
        } while(1);
}
