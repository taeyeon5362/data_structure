#include <stdio.h>
#include <stdilb.h>

int main() {
    int i, n, arr[10];
    system("cls");
    printf("\n Enter the number of elements in the array : ");
    scanf_S("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\n arr[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }

    printf("\n The array elements are");
    for (i = 0; i < n; i++) {
        printf("\t %d", arr[i]);
    }
    return 0;
}
