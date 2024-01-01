#include <stdio.h>
#include <stdilb.h>

int main() {
    int array[10], i, n, j, flag = 0;
    system("cls");
    printf("\n Enter the size of the array : ");
    scanf_S("%d", &n);
  
    for (i = 0; i < n; i++) {
        printf("\n array[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if(array[i] == array[j] && i != j) {
                flag = 1;
                printf("\n Duplicate numvers found ar locations %d and %d", i, j);
            }
        }
    }
  
    if (flag == 0)
        printf("\n No Duplicates Found");
    return 0;
}
