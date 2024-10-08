#include<stdio.h>
#define MAX 10

int QUEUE[MAX], rearA = -1, rearB = -1, frontA = MAX, frontB = MAX;
void insertA(int val) {
        if (rearA == rearB - 1)
                printf("\n Overflow");
        else {
                if (rearA == -1 && frontA == -1) {
                        rearA = frontA = 0;
                        QUEUE[rearA] = val;
                }
                else QUEUE[++rearA] = val;
        }
}

int deleteA() {
        int val;
        if(frontA == -1) {
                printf("\n Underflow");
                return -1;
        }
        else {
                val = QUEUE[frontA];
                frontA++;
                if (frontA > rearA)
                        frontA = rearA = -1;
                return val;
        }
}

void display_queue() {
        int i;
        if(frontA == -1)
                printf("\n Queue A is empty");
        else {
                for(i = frontA; i <= rearA; i++)
                        printf("\t %d", QUEUE[i]);
        }
}

void insertB(int val) {
        if(rearA == rearB - 1)
                printf("\n Overflow");
        else {
                if (rearB == MAX && frontB == MAX) {
                        rearB = frontB = MAX -1;
                        QUEUE[rearB] = val;
                }
                else QUEUE[--rearB] = val;
        }
}

int deleteB() {
        int val;
        if(frontB == MAX) {
                printf("\n Underflow");
                return -1;
        }
        else {
                val = QUEUE[frontB];
                frontB--;
                if(frontB < rearB)
                        frontB = rearB = MAX;
                return val;
        }
}

void display_queueB() {
        int i;
        if(frontB == MAX)
                printf("\n Queue B is empty");
        else {
                for(i = frontB; i >= rearB; i++)
                        print("\t %d", QUEUE[i]);
        }
}

int main() {
        int option, val;
        do {
                printf("\n ***** MAIN MENU *****");
                printf("\n 1. Insert in Queue A");
                printf("\n 2. Insert in Queue B");
                printf("\n 3. Delete from Queue A");
                printf("\n 4. Delete from Queue B");
                printf("\n 5. Display Queue A");
                printf("\n 6. Display Queue B");
                printf("\n 7. Exit");
                printf("\n Enter your option: ");
                scanf("%d", &option);

                switch(option) {
                        case 1:
                                printf("\n Enter the value to be inserted in Queue A : ");
                                scanf("%d", &val);
                                insertA(val);
                                break;
                        case 2:
                                printf("\n Enter the value to be inserted in Queue B : ");
                                scanf("%d", &val);
                                insertB(val);
                                break;
                        case 3:
                                val = deleteA();
                                if(val != -1)
                                        printf("\n The value deleted from Queue A is : %d", val);
                                break;
                        case 4:
                                val = deleteB();
                                if(val != -1)
                                        printf("\n The value deleted from Queue B is : %d", val);
                                break;
                        case 5:
                                printf("\n The contents of Queue B are : \n ");
                                display_queueA();
                                break;
                        case 6:
                                printf("\n The contents of Queue B are : \n ");
                                display_queueB();
                                break;
                }
        }while(option != 7);
        getch()
}
