#include<stdio.h>
#include<stdlib.h>

struct node {
        int a;
        struct node *next;
};

void generate(sturct node **);
void display(struct node *);
void stack_reverse(struct node **);
void delete(struct node **);

int main() {
        struct node *head = NULL;

        genrate(&head);
        printf("\n The sequence of contents in stack \n");
        display(head);
        printf("\n Inversing the contents of the stack \n");
        stack_reverse(&head);
        printf("\n contents in stack after reversal \n");
        display(head);
        delete(&head);

        return 0;
}

void stack_reverse(struct node **head) {
        struct node *temp, *prev;

        if (*head == NULL) {
                printf("Stack does not exits \n");
        }
        else if ((*head)->next == NULL) {
                printf("Single node stack reversal brings no difference \n");
        }
        else if ((*head)->next->next == NULL) {
                (*head)->next->next = *head;
                *head = (*head)->next;
                (*head)->next->next = NULL;
        }
        else {
                prev = *head;
                temp = (*head)->next;
                *head = (*head)->next->next;
                prev->next = NULL;
                while((*head)->next != NULL) {
                        temp->next = prev;
                        prev = temp;
                        temp = *head;
                        *head = (*head)->next;
                }
                temp->next = prev;
                (*head)->next = temp;
        }
}

void display(struct node *head) {
        if(head != NULL) {
                printf("%d ", head->a);
                display(head->next);
        }
}

void generate(struct node **head) {
        int num, i;
        struct node *temp;

        printf("Enter length of list : ");
        scanf("%d", &num);

        for(i = num; i > 0; i--) {
                temp = (struct node *)malloc(sizeof(struct node));
                temp->a = i;
                if(*head == NULL) {
                        *head = temp;
                        (*head)->next = NULL;
                }
                else {
                        temp->next = *head;
                        *head = temp;
                }
        }
}

void delete(struct node **head) {
        struct node *temp;
        while(*head != NULL) {
                temp = *head;
                *head = (*head)->next;
                free(temp);
        }
}
