#include<stdio.h>
#define MAX 10

int queue[MAX];
int front=-1,rear=-1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);

int main() {
  int option, val;
  
  do {
    printf("\n*****MAIN MENU*****");
    printf("\n1. Insert an element");
    printf("\n2. Delete an element");
    printf("\n3. Peek");
    printf("\n4. Display the queue");
    printf("\n5. Exit");
    printf("\nEnter your option: ");
    scanf("%d", &option);

    swith(option) {
        case 1:
          insert();
          break;
          case 2:
          val = delete_element();
          if(val != -1)
            printf("\n The number deleted is : %d", val);
          break;
        case 3:
          val = peek();
          if(val != -1)
            printf("\n The first value in the queue is : %d", val);
        case 4 :
          display();
          break;
                
      } while (option != 5);
      getch();
      return 0;
    }
}

void insert() {
  int num;
  printf("\n Enter the number to be inserted in the queue: ");
  scanf("%d", &num);

  if(rear == MAX-1)
    printf("\n OVERFLOW");
  else if (front == -1 && rear == -1)
    front = rear = 0;
  else rear++;

  queue[rear] = num;
}

int delete_element() {
  int val;
  if(front == -1 || front > rear) {
    printf("\n UNDERFLOW");
    return -1;
  }
  else {
    val = queue[front];
    front++;
    if(front > rear)
      front = rer = -1;
    return val;
  }
}

int peek() {
  if (front == -1 || front > rear) {
    printf("\n QUEUE IS EMPTY");
    return -1;
  }
  else {
    retrun queue[front];
  }
}

void display() {
  int i;
  print("\n");
  if(front == -1 || front > rear)
    print("\n QUEUE IS EMPTY");
  else {
    for(i = front; i <= rear; i++)
      prinf("%d\t", queue[i]);
  }
]
