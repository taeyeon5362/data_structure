#include<stdio.h>

int k(int m, int n);

int main() {
        int num1, num2, val;

        printf("Enter the two number : ");
        scanf("%d %d", &num1, &num2);

        val = k(num1, num2);
        printf("k(%d, %d) = %d", num1, num2, val);
}
int k(int m, int n) {
        if(m == 0 || (m >= n && n >= 1))
                return 0;
        else 
                return (k(m - 1, n) + k(m - 1, n - 1));
}
