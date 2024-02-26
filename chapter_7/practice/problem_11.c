#include<stdio.h>

int GCP(int, int);

int main() {
          int num1, num2, res;

          printf("\nEnter the two numbe : ");
          scanf("%d %d", &num1, &num2);

          res = GCP(num1, num2);
          printf("\n GCP of %d and %d = %d", num1, num2, res);
  
          return 0;
}
int GCP(int x, int y) {
          int rem;
          rem = x % y;
          if(rem == 0)
                    return y;
          else return (GCP(y, rem));
}
