#include <stdio.h>
#include <stdilb.h>

int main() {
    int i, n, num, pos, arr[10];
    system("cls");
    printf("\n Enter the number elements in the array : ");
    scanf_s("%d", &n);
  
    for (i = 0; i < n; i++) {
        printf("\n array[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }
  
    printf("\n Enter the number to be inserted : ");
    scanf_s("%d", &num);
    printf("\n Enter the position at which the number has to be added : ");
    scanf_s("%d", &pos);
  
    for (i = n -1; i >= pos; i--) {
       arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    n = n + 1;
    printf("\n The array after insertion of %d is : ", num);
  
    for (i = 0; i < n; i ++){
        printf("\n array[%d] = %d", i, arr[i]);
    }
    getch();
    return 0;
}
