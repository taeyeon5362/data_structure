#include<stdio.h>

int Lambda(int n);

int main() {
        int num, val;

        printf("Enter the number : ");
        scanf("%d", &num);

        val = Lambda(num);
        if(val == -1)
                printf("ERROR");
        else
                printf("Lambda %d = %d", num, val);
}
int Lambda(int n) {
        if(n == 1)
                return 0;
        else if(n < 1)
                return -1;
        elss
                return (Lambda(n / 2) + 1);
}
