#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000];
    int i = 0, word_count = 1, line_count = 1, char_count = 1;

    system("cls");
    printf("\n Enter a '*'  to end : ");
    printf("\n ************* ");
    printf("\n Enter the text : ");
    scanf_s("%c", &str[i]);

    while(str[i] != '*') {
        i++;
        scanf_s("%c", &str[i]);
    }
    str[i] = '\0';
    i = 0
    while(str[i] != '\0') {
        if(str[i] == '\n' || i == 79) 
            line_count++;
        if(str[i] == ' ' && str[i+1] != ' ')
            word_count++;
        char_count++;
        i++;
    }

    printf("\n The total count of words is : %d", word_count);
    printf("\n The total count of line is : %d", line_count);
    printf("\n The total count of characters is : %d", char_count);
    
    return 0;
}
