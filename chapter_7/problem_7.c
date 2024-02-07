#include<stdio.h>

int F(int n, int r);

int main() {
        int num1, num2, val;

        printf("Enter the two number : ");
        scanf("%d %d", &num1, &num2);

        val = F(num1, num2);
        printf("F(%d %d) * %d", num1, num2, val);
}
int F(int n, int r) {
        if(n == 0)
                return 0;
        else 
                return (F(n - 1, r) + F(n - 1, r - 1));
}
