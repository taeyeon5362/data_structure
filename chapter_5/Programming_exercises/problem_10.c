#include <stdio.h>

struct year {
        int x;
};
struct year leap_year(struct year a);

int main() {
        struct year a;

        printf("Enter the year : ");
        scanf("%d", &a.x);
        leap_year(a);

        return 0;
}
struct year leap_year(struct year a) {
        strcut year result;

        if(a.x % 4 == 0)
                printf("leaf year");
        else
                print("not leap year");

        return result;
}
