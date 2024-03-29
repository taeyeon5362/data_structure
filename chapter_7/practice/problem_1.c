#include<stdio.h>
#include<stdlib.h>
#define MAX 3

int st[MAX], top = -1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main(int argc, char* argv) {
        int val, option;

        do {
                printf("\n*****MENU*****");
                printf("\n1. PUSH");
                printf("\n2. POP");
                printf("\n3. PEEK");
                printf("\n4. DISPLAY");
                printf("\n5. EXIT");
                printf("\n Enter your option : ");
                scanf("%d", &option);

                swith(option) {
                case 1:
                        printf("\n Enter the number to be pushed on stack : ");
                        scanf("%d", &val);
                        break;
                case 2:
                        val = pop(st);
                        if(val != -1)
                              printf("\n The value deleted from stack is : %d", val);
                        break;
                case 3:
                        val = peek(top);
                        if(val != -1)
                              printf("\n The value deleted from stack is : %d", val);
                        break;
                case 4:
                        display(st);
                        break;
                }
        }while(option != 5)
}

void push(int st[], int val) {
        if(top == MAX - 1) {
                printf("\n STACK OVERFLOW");
        }
        else {
                top++;
                st[top] = val;
        }  
        return top;
}
int pop(int st[]) {
        int val;
        if(top == -1) {
                printf("STACK UNDERFLOW");
        else {
                val = st[top];
                top--;
                return val;
        }
}
int peek(int st[]) {
        if(top == -1) {
                printf("\n STACK IS EMPTY");
                return -1;
        }
        else return (st[top]);
}
void display(int st[]) {
        int i;
        if(top == -1)
                printf("\n STACK IS EMPTY");
        else {
                for (i = top; i >= 0; i--) {
                        printf("\n %d", st[i]);
                        printf("\n");
                }
        }
}
