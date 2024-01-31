#include <stdio.h>

struct Coordinates {
        int x;
        int y;
};

int main() {
        struct Coordinates *ptr_Coordinates, Coordinates1;
        ptr_Coordinates = &Coordinates;
        printf("\n Enter x and y : ");
        scanf("%d %d", &ptr_Coordinates->x, %ptr_Coordinates->y);

        if(ptr_Coordinates->x > 0 && ptr_Coordinates->y > 0)
                printf("\n Quandrant 1\n");
        else if(ptr_Coordinates->x < 0 && ptr_Coordinates->y > 0)
                printf("\n Quandrant 2\n");
        else if(ptr_Coordinates->x < 0 && ptr_Coordinates->y < 0)
                printf("\n Quandrant 3\n");
        else if(ptr_Coordinates->x > 0 && ptr_Coordinates->y < 0)
                printf("\n Quandrant 4\n");
        else 
                printf("\n Line\n");

        return 0;
}
