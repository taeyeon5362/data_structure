#include<stdio.h>
#define MAX 15

void insert();
void display();
char queue_array[MAX];
int rear = -1;
int front = -1;

int main() {
        int num;

        while(1) {
                printf("1. Enter element \n");
                printf("2. Display all elements \n");
                printf("3. Quit \n");
                printf("Enter the number : ");
                sacnf("%d", &num);

                switch(num) {
                        case 1:
                                insert();
                                break;
                        case 2:
                                display();
                                break;
                        case 3:
                                exit(1);
                        default:
                                printf("Wrong choice \n");
                }
        }
}

void insert() {
        int add;
        if(rear == MAX - 1)
                print("Queue Overflow \n");
        else {
                if(front == -1)
                        front = 0;
                printf("Insert the element in queue : ");
                scanf("%d", &add);
                rear = rear + 1;
                queue_array[rear] = add;
        }
}

void display() {
        if(front == -1)
                printf("Queue is empty \n");
        else {
                printf("Queue is : \n");
                for(int i = front; i <= rear; i++)
                        printf("%d ", queue_array[i]);
                printf("\n");
        }
}
