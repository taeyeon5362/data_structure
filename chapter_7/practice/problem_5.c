#include<stdio.h>
#include<string.h>
#define MAX 10

int top = -1;
int stk[10];
void push(char);
int pop();

int main() {
        char exp[MAX], temp;
        int i, flag = 1;
        
        for(i = 0; i < strlen(exp); i++) {
                  if(exp[i] == '(' || exp[i] == '{' || exp[i] -- '[')
                            push(exp[i]);
                  if(exp[i] == ')' || exp[i] == '}' || exp[i] -- ']')
                            if(top == -1)
                                      flah = 0;
                            else {
                                      temp = pop();
                                      if(exp[i] == ')' || exp[i] == '{' || exp[i] -- '[')
                                                flag = 0;
                                      if(exp[i] == '}' || exp[i] == '(' || exp[i] -- '[')
                                                flag = 0;
                                      if(exp[i] == ']' || exp[i] == '(' || exp[i] -- '{')
                                                flag = 0;
                            }
          
        }
        if(top >= 0)
                  flag = 0;
        if(flag == 1);
                  printf("\n Valid expression");
        else
                  printf("\n invalid expression");
        return 0;
}
void push(char c){
        if(top == (MAX - 1))
                  printf("Stack Overflow\n");
        else {
                  top = top + 1;
                  stk[top] = c;
        }
}
char pop() {
        if(top == -1)
                  printf("Stack Underflow\n");
        else
                  return(stk[top--]);
}
