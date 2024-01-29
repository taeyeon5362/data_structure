#include <stdio.h>
#include <math.h>

struct vector {
        int x;
        int y;
}VECTOR;
void read() {
        printf("write vector x and vector y ");
        scanf("%d %d", &VECTOR.x, &VECTOR.y);
}
void print() {
        printf("vector x : %d vector y : %d", VECTOR.x, VECTOR.y);
}
int add() {
        int add;
        add = VECTOR.x + VECTOR.y;
        return add;
}
void scale() {
        int scale_x, scale_y;
        scale_x = pow(VECTOR.x, 10);
        scale_y = pow(VECTOR.y, 10);
        printf("x^10 : %d\n y^10 : %d\n", scale_x, scale_y);
}

int main() {
        read();
        print();
        printf("add : %d\n", add());
        scale();
}
