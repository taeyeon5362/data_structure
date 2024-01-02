#include <stdio.h>
#include <stdilb.h>

int main() {
    int i, n, j, num, arr[10];
    system("cls");
    printf("\n Enter the number of elements in the array : ");
    scanf_s("%d", &n);
  
    for (i = 0; i < n; i++) {
        printf("\n array[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }
  
    printf("\n Enter the number to be inserted : ");
    scanf_s("%d", &num);
    for (i = 0; i < n; i ++){
        if (arr[i] > num) {
            for(j = n -1; j >= i; j--) {
                arr[j + 1] = arr[j];
            }
            arr[i] = num;
            break;
        }
    }

    n = n + 1;
    printf("\n The array after insertion of %d is : ", num);
    for (i = 0; i < n; i ++){
        printf("\n arr[%d] = %d", i, arr[i]);
    }
    getch();
    return 0;
}
