#include <stdio.h>

union u {
        int i;
        floar f;
        char str[20];
};
struct s {
        int i;
        floar f;
        char str[20];
};

int main() {
        union u ud;
        struct s sd;

        printf("\n Sizeof Union : %d", sizeof(ud));
        printf("\n Sizeof Structure : %d", sizeof(sd));
  
        return 0;
}
