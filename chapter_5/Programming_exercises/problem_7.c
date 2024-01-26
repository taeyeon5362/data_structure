#include <stdio.h>

struct tell_number {
        char name[10];
        char age[10]
};

int main() {
        struct tell_number tell[10] = { 0 };
        int cmd;
        int i;

        while(1) {
                printf("input[0] correction[1] Output[2] \n");
                printf("Please select the action you want : ");
                scanf("%d", &cmd);

                if(cmd == 0) {
                        for(int i = 0; i < 10; i++)if(tell[i + 1].name[0] == 0) break; 
                                if(i == 10) {
                                        printf("There is no more space to save.\n\n");
                                        continue;
                                }
                                printf("enter the name : ");
                                scanf("%s", tell[i + 1].name);
                                printf("enter the age : ");
                                scanf("%s", tell[i + 1].age);
                                printf("save\n\n");
                }
                else if(cmd == 1) {
                        printf("Write down the number you want to modify : ");
                        scanf("%d", &i);
                        if(tell[i].name[0] == 0) {
                                printf("don't save.\n\n");
                                continue;
                        }
                        printf("enter the name : ");
                        scanf("%s", tell[i + 1].name);
                        printf("enter the age : ");
                        scanf("%s", tell[i + 1].age);
                        printf("modified\n\n");

                }
                else if(cmd == 2) {
                        for(int i = 0; i < 10; i++) {
                                if(tell[i].name[0] != 0) {
                                        printf("%dthe\n", i);
                                        printf("name : %s\n", tell[i].name);
                                        printf("age : %s\n\n", tell[i].age);
                                }
                        }
                }
                else if(cmd == -1) break;
                else printf("re-enter.\n\n");
        }
}
