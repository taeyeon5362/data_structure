#include <stdio.h>

struct height {
        int x;
        int y;
};
struct height height_sum(struct height a, struct height b);
struct height height_subtract(struct height a, struct height b);

int main() {
        struct height a = { 6, 2 };
        struct height b = { 5, 4 };
        struct height sum;
        struct height subtract;

        sum = height_sum(a, b);
        subtract = height_subtract(a, b);
  
        printf("The sum of height is %d'%d\n", sum_x, sum_y);
        printf("The subtract of height is %d'%d\n", subtract_x, subtract_y);

        return 0;
}
struct height height_sum(struct height a, struct height b){
        struct height result_sum;

        result_sum.x = a.x + b.x;
        result_sum.y = a.y + b.y;
}
struct height height_subtract(struct height a, struct height b){
        struct height result_subtract;

        if(a.y < b.y) {
                a.x -= 1;
                a.y = 10 - b.y + a.y;

                result_subtract.x = a.x - b.x;
                result_subtract.y = a.y;
        }
        else {
                result_subtract.x = a.x - b.x;
                result_subtract.y = a.y - b.y;
        }
        return result_subtract;
}
