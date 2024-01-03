#include <stdio.h>
#include <stdilb.h>

int main() {
    int i, n, j, pos, arr[10];
    system("cls");
    printf("\n Enter the number of elements in the array : ");
    scanf_s("%d", &n);
  
    for (i = 0; i < n; i++) {
        printf("\n arr[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }
  
    printf("\n Enter the position from which the number has to be deleted : ");
    scanf_s("%d", &pos);
    for (i = 0; i < n - 1; i ++){
        arr[i] = arr[i + 1];
    }
    n--;
    n = n + 1;
    printf("\n The array after deletion is : ");
    for (i = 0; i < n; i ++){
        printf("\n arr[%d] = %d", i, arr[i]);
    }
    getch();
    return 0;
}
