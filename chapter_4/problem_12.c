#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int i = 0, j, length = 0;

    system("cls");
    printf("\n Enter the string : ");
    gets(str);

    while(str[i] != '\0') {
        length++;
        i++;
    }
    i = 0;
    j = length - 1;
    while(i <= length / 2) {
        if(str[i] == str[j]){
            i++;
            j--;
        }  
        else break;
    }

    if(i > j)
        printf("\n PALINDROME");
    else printf("\m NOT A PALINDROME");
    
    return 0;
}
