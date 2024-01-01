#include <stdio.h>
#include <stdilb.h>

int main() {
    int i, n, arr[10], small, pos;
    system("cls");
    printf("\n Enter the number of elements in the array : ");
    scanf_S("%d", &n);
    printf("\n Enter the elements");
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    small = arr[0];
    pos = 0;
    for (i = 0; i < n; i++) {
        if(arr[i] < small) {
            small = arr[i];
          pos = i;
        }
    }
    printf("\n The smallest elements is %d", small);
    printf("\n The position of the smallest element in the array is %d", pos);
    return 0;
}
