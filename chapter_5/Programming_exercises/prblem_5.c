#include <stdio.h>

typedef struct number {
        int number;
}num;

int main() {
        num p1[3];
        int count = 0, small = 10000000;
        int menu = 0, num = 0;

        for(int i = 0; i < 3; i++) {
                printf("number : ");
                scanf("%d", &p1[i].number);
        }
        for(int i = 0; i < 3; i++) {
                if(small > p1[i].number) {
                        small = p1[i].number;
                }
        }
        printf("%d", small);
}
