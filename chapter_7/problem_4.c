#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int push(char stack[MAX][80], int *top, char data[80]){
        if(*top == MAX -1)
              return -1;
        else {
              *top = *top + 1;
              strcpy(stack[*top], data);
              return(1);
        }
}
int main() {
        char stack[MAX][80], name[80];
        int top, option, reply;

        top = -1;
        printf("1. Push\n");
        printf("2. Exit\n");

        while(1) {
              printf(" : ");
              scanf("%d", &option);
              swith(option) {
              case 1:
                      printf("\n Enter student's name : ");
                      scanf("%s", &name);
                      reply = push(stack, &top, name);
                      if(reply == -1)
                              printf("\n Stack is Full\n\n");
                      else
                              printf("\n is Push\n\n");
                      break;
              case 2:
                      exit(0);
              }
        }
  
        return 0;
}
