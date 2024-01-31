#include <stdio.h>

struct fraction {
        int x, y;
};

int compare(struct fraction a, struct fraction b) {
        float f_num1 = (float)(a.x) / (float)(a.y);
        float f_num2 = (float)(b.x) / (float)(b.y);

        if(f_num1 < f_num2)
              printf("-1");
        else if(f_num1 == f_num2)
              printf("0");
        else
              printf("1");
}

int main() {
        struct fraction f1, f2;

        printf("Enter the numberator and deniminator of two fraction numbers : \n ");
        printf(" 1. x y(x / y)\n");
        printf(" 2. x y(x / y)\n");
        scanf("%d %d", &f1.x, %f1.y);
        scanf("%d %d", &f2.x, %f2.y);
        compare(f1, f2);
        return 0;
}
