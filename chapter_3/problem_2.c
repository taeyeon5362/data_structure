#include <stdio.h>
#include <stdilb.h>

int main() {
    int i, n, arr[10], sum = 0;
    float mean = 0.0;
    system("cls");
    printf("\n Enter the number of elements in the array : ");
    scanf_S("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\n arr[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    mean = (float)sum /n;
    printf("\n The sum of the array elements = %d", sum);
    printf("\n The mean of the array elements = %d", mean);
    return 0;
}
