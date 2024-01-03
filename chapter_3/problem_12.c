#include <stdio.h>
#include <stdilb.h>

int main() {
    int arr1[10], arr2[10], arr3[12];
    int i, n1, n2, m, index = 0; 

    system("cls");
    printf("\n Enter the number of elements in array1 : ");
    scanf_s("%d", &n1);
    printf("\n Enter the elements of the first array : ");
    for(i = 0; i < n1; i++) {
        printf("\n arr1[%d] = ", i);
        scanf_s("%d", &arr1[i]);
    }

    printf("\n Enter the number of elements in array2 : ");
    scanf_s("%d", &n2);
    printf("\n Enter the elements of the second array : ");
    for(i = 0; i < n2; i++) {
        printf("\n arr2[%d] = ", i);
        scanf_s("%d", &arr2[i]);
    }

    m = n1 + n2;
    while(index_first < n1 && index_second <n2) {
        if(arr1[index_first] < arr2[index_second]) {
            arr3[index] = arr1[index_first];
            index_first++;
        }
        else {
            arr3[index] = arr2[index_second];
            index_second++;
        }
    }

    if(index_first == n1) {
        while(index_second < n2) {
            arr3[index] = arr2[index_second];
            index_second++;
            index++;
        }
    }
    else if(index_first == n2) {
        while(index_second < n1) {
            arr3[index] = arr1[index_first];
            index_first++;
            index++;
        }
    }
    
  
    printf("\n The merged array is : ");
    for (i = 0; i < m; i ++){
        printf("\n arr[%d] = %d", i, arr3[i]);
    }
    getch();
    return 0;
}
