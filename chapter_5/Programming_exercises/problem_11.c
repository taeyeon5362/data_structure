#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
        char name[20];
        int age;
        char desgination[30];
};

int main() {
        struct Person *p1 = malloc(sizeof(struct Person));

        strcpy(p1->name, "kim tae yeon");
        p1->age = 25;
        strcpy(p1->desgination, "employee");
  
        printf("name: %s\n : ", p1->name);
        printf("age: %s\n : ", p1->age);
        printf("name: %s\n : ", p1->desgination);

        free(p1);
        
        return 0;
}
