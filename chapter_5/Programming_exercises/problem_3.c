#include <stdio.h>
#define max 30
typedef struct information {
        char name[max];
        struct english {
              int marks;
        }eng;
        struct math {
              int marks;
        }math;
        struct computer {
              int marks;
        }com;
}stu;

stu input() {
        stu p1;
  
        printf("name : ");
        scanf("%s", p1.name);
        printf("English Marks : ");
        scanf("%d", p1.eng.marks);
        printf("Math Marks : ");
        scanf("%d", p1.math.marks);
        printf("Computer Marks : ");
        scanf("%d", p1.com.marks);
  
        return p1;
}
int main() {
        int menu = 0, num = 0;
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
                                total_student[i] = p1[i].eng.marks +p1[i].math.marks + p1[i].com.marks;
                        }
                        for(int i = 0; i < num; i++) {
                                total_class[0] += p1[i].eng.marks;
                        }
                        for(int i = 0; i < num; i++) {
                                total_class[1] += p1[i].math.marks;
                        }
                        for(int i = 0; i < num; i++) {
                                total_class[2] += p1[i].com.marks;
                        }
                        for(int i = 0; i < num; i++) {
                                printf("average[%d] : %d\n", i, total_class[i] / num);
                        }
                        
                }
                else if(menu == 3) {
                        return 0;
                }
        } while(1);
}
