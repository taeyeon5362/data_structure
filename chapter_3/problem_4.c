#include <stdio.h>
#include <stdilb.h>

int main() {
    int i, n, arr[20], large, second_large;
    system("cls");
  
    printf("\n Enter the number of elements in the array : ");
    scanf_S("%d", &n);
    printf("\n Enter the elements");
  
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    large = arr[0];
    for (i = 0; i < n; i++) {
        if(arr[i] != large) {
            if(arr[i] > second_large) {
                second_large= arr[i];
            }
        }
    }
    printf("\n The numbers you enterd are : ");
    for (i = 0; i < n; i++) {
        printf("\t %d", arr[i]);
    }
  
    printf("\n The largest elements is %d", large);
    printf("\n The second largest of these numbers is %d", second_large);
  
    return 0;
}
