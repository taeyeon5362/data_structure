#include<stdio.h>
#include<malloc.h>

struct stack {
        int data;
        struct node* next;
};
struct queue {
        struct node* front;
        struct node* rear;
};

struct queue* q;
void create_queue(struct queue*);
struct queue* insert(struct queue*, int);
struct queue* delete_element(struct queue*);
struct queue* display(struct queue*);
int peek(struct queue*);

int main() {
        int option, val;
        create_queue(q);

        do {
                printf("\n*****MAIN MENU*****");
                printf("\n1. INSERT");
                printf("\n2. DELETE");
                printf("\n3. PEEK");
                printf("\n4. DISPLAY");
                printf("\n5. EXIT");
                printf("\n Enter your option: ");
                scanf("%d", &option);

                switch(option) 
                {
                case 1:
                        printf("\n Enter the number to insert in the queue: ");
                        scanf("%d", &val);
                        q = insert(q, val);
                        break;
                case 2:
                        q = delete_element(q);
                        break;
                case 3:
                        val = peek(q);
                        break;
                case 4:
                        q = display(q);
                        break;
                }
        }while(option != 5);
        getch();
        return 0;
}
void create_queue(struct queue* q) {
        q->rear = NULL;
        q->front = NULL;
}

struct queue* insert(struct queue* q, int val) {
        struct node* ptr;
        ptr = (struct node*)malloc(sizeof(struct node));
        ptr->data = val;
        if(q->rear == NULL) {
                q->front = ptr;
                q->rear = ptr;
                q->front->next = q->rear->next = NULL;
        }
        else {
                q->rear->next = ptr;
                q->rear = ptr;
                q->rear->next = NULL;
        }
        return q;
}

struct queue* display(struct queue* q) {
        struct node* ptr;
        ptr = q->front;
        if(ptr == NULL)
                printf("\n Queue is empty");"
        else {
                printf("\n");
                while(ptr != q->rear) {
                        printf("%d ", ptr->data);
                        ptr = ptr->next;
                }
                printf("%d ", ptr->data);
        }
        retrun q;
}

struct queue* delete_element(struct queue* q) {
        struct node* ptr;
        ptr = q->front;
        if(q->front == NULL)
                print("\n underflow");
        else {
                q->front = q->front->next;
                printf("\n The Value being deleted is: %d", ptr->data);
                free(ptr);
        }
        return q;
}

int peek(struct queue* q) {
        if(q->front = NULL) {
                printf("\n Queue is empty");
                return -1;
        }
        else
                return q->front->data
}
