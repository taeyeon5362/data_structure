#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str[100], reverse_str[100], temp;
    int i = 0, j = 0;
    
    printf("\n Enter the string : ");
    gets(str);


    while(i < j) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }

    printf("\n The reversed string is :");
    puts(str);
    getch();
    
    return 0;
}
