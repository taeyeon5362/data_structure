#include<stdio.h>
#include<string.h>

typedef struct {
        char element[100];
        int top;
}stack;

void init(stack *s){
        s->top = -1;
}
int is_empty(stack *s){
        return (s->top == -1);
}
void push(stack *s, int item){
        s->element[++(s->top)] = item;
}
void compare(stack *s, stack *t) {
        if(is_empty(s) != -1 && is_empty(t) != -1) {
                if(s->top != t->top) {
                        printf("Different\n");
                        return;
                }
                for(int i = 0; i <= s->top; i++) {
                        if(strcmp(s->element, t->element) != 0)
                                printf("Diffenet\n");
                        break;
                }
                if(strcmp(s->element, t->element) == 0) {
                        printf("Same\n");
                }
}

int main() {
        int input = 0;
        stack A, B;
        init(&A);
        init(&B);

        printf("(A) Enter the value (Break : -1)\n");
        do {
                printf("Eneter : ");
                scanf("%d", &input);
                push(&A, input);
        } while(input != -1);

        printf("(B) Enter the value (Break : -1)\n");
        do {
                printf("Eneter : ");
                scanf("%d", &input);
                push(&B, input);
        } while(input != -1);

        compare(&A, &B);
        return 0;
}
