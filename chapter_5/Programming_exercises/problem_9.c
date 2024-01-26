#include <stdio.h>

struct time {
        int x;
        int y;
        int z;
};
struct time time_sum(struct time a, struct time b);
struct time time_subtract(struct time a, struct time b);

int main() {
        struct time a = { 10, 20, 50 };
        struct time b = { 5, 30, 40 };
        struct time sum;
        struct time subtract;

        sum = time_sum(a, b);
        subtract = time_subtract(a, b);
  
        printf("The sum of time is %d hrs %d mins %d sec \n", sum_x, sum_y, sum_z);
        printf("The subtract of time is %d hrs %d mins %d sec \n", subtract_x, subtract_y, subtract_z);

        return 0;
}
struct time time_sum(struct time a, struct time b){
        struct time result_sum;

        if(a.z + b.z > 60) {
                result.sum.x = a.x + b.x;
                result_sum.y = a.y + b.y + 1;
                result_sum.z = a.z + b.z - 60;
        }
        else { 
                result.sum.x = a.x + b.x;
                result_sum.y = a.y + b.y;
                result_sum.z = a.z + b.z;
        }
}
struct time time_subtract(struct time a, struct time b){
        struct time result_subtract;

        if(a.y - b.y < 0) {
                result.subtract.x = a.x - b.x - 1;
                result_subtract.y = a.y - b.y + 60;
                result_subtract.z = a.z - b.z;
        }
        else {
                result.subtract.x = a.x - b.x;
                result_subtract.y = a.y - b.y;
                result_subtract.z = a.z - b.z;
        }
        return result_subtract;
}
