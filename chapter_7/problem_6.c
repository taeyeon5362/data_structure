#include<stdio.h>

int F(int x, int y);

int main() {
        int num1, num2, val;

        printf("Enter the two number : ");
        scanf("%d %d", &num1, &num2);

        val = F(num1, num2);
        printf("F(%d %d) * %d", num1, num2, val);
}
int F(int x, int y) {
        if(x < y)
                return 0;
        else if(y == x)
                return (F(n - 1, r) + F(n - 1, r - 1));
}
