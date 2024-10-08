#include<stdio.h>
#include<stdlib.h>
#define MAX 15

char queue[MAX];
int front = -1, rear = -1;
void insert();
void display();

int main() {
        int option, val;

        printf("\n\n ==== MAIN MENU ====");
        printf("\n Enter the first number : ");
        insert();
        getchar();
        printf("\n Enter the sign : ");
        insert();
        getchar();
        printf("\n Enter the second number : ");
        insert();
        getchar();
        display();
}

void insert() {
        char bol;
        scanf("%c", &bol);

        if(rear == MAX -1)
                printf("\n Overflow");
        else if(front == -1 && rear == -1)
                front = rear = 0;
        else rear++;
        queue[rear] = bol;
}

void display() {
        int i;
        int num1, num2;
        print("\n");

        if(front == -1 || front > rear)
                printf( "Queue is empty");
        else {
                if(queue[0] >= '0' && queue[0] <= '9')
                        num1 = queue[0] - '0';
                if(queue[2] >= '0' && queue[2] <= '9')
                        num2 = queue[2] - '0';
                
                switch(queue[1]) {
                        case '+':
                                printf("\n %c %c %c = %d", queue[0], queue[1], queue[2], num1 + num2);
                                break;
                        case '-':
                                printf("\n %c %c %c = %d", queue[0], queue[1], queue[2], num1 - num2);
                                break;
                        case '*':
                                pritnf("\n %c %c %c = %d", queue[0], queue[1], queue[2], num1 * num2);
                                break;
                        case '/':
                                printf("\n %c %c %c = %d", queue[0], queue[1], queue[2], num1 / num2);
                                break;
                }
        }
}
