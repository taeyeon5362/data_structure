#include <stdio.h>

int main() {
        int aaxis_x = 6, aaxis_y = 3;
        int baxis_x = 2, baxis_y = 2;

        printf("distance : %f", pow((aaxis_x- baxis_x), 2) - pow((aaxis_y - baxis_y), 2));
}
