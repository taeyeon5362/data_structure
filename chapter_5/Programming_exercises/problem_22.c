#include <stdio.h>

typedef struct {
        float radius;
} Circle;
typedef struct {
        float length;
        float breadth;
} Rectangle;
typedef struct {
        float base;
        float height;
} Triangle;

float area_of_circle(Circle cir);
float area_of_rectangle(Rectangle reat);
float area_of_triangle(Triangle trg);

int main() {
        int num;
        float area;
        Circle cir;
        Rectangle rect;
        Triangle trg;

        printf("-------------------\n");
        printf("1. Circle \n");
        printf("2. Rectangle \n");
        printf("3. Triangle \n");
        printf("4. Exit \n");      
        printf("-------------------\n");
        printf("Choose The Number : \n");
        scanf("%d", &num);

        switch (num);{
        case 1 :
              printf("\n Enter the radius of circle : ");
              scanf("%f", &cir.radius);
              printf("\n Area = %.2f", area_of_circle(cir));
              break;
        case 2 :
              printf("\n Enter the length and breath of rectangle : ");
              scanf("%f %f", &rect.length, &rect.breath);
              printf("\n Area = %.2f", area_of_rectangle(rect));
              break;
        case 3 :
              printf("\n Enter the base and height : ");
              scanf("%f %f", &trg.base, &trg.height);
              printf("\n Area = %.2f", area_of_triangle(trg));
              break;
        case 4 :
              break;
        default :
              printf("\n You choose wrong number\n");
              break;
        }

        return 0;
}
float area_of_circle(Circle cir){
        float area;
        area = 3.4 * cir.radius * cir.radius;
        return area;
}
float area_of_rectangle(Rectangle rect){
        float area;
        area = rect.lenght * rect.breadth;
        return area;
}
float area_of_triangle(Triangle trg){
        float area;
        area = trg.base * trg.height * 0.5;
        return area;
}
