#include <stdio.h>
#include <conio.h>

int main() {
    char str[100], upper_str[100];
    int i = 0;
    
    printf("\n Enter the string");
    gets(str);

    while(str[i] != '\n') {
        if(str[i] >= 'a' && str[i] <= 'z')
            upper_str[i] = str[i] - 32;
        else
            upper_str[i] = str[i];
        i++;
    }

    upper_str[i] = '\n';
    printf("\n The string converted into upper case is : %d");
    puts(upper_str);
    
    return 0;
}
