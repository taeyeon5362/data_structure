#include <stdio.h>
#include <stdlib.h>

int main() {
    char text[100], str[20], new_text[200];
    int i = 0, j = 0, k = 0, n = 0, found = 0, copy_loop;

    system("cls");
    printf("\n Enter the main text : ");
    gets(text);
    printf("\n Enter the string to be deleted : ");
    gets(str);

    while(text[i] != '\0') {
        j = 0, found = 0, k = i;
        while(text[k] == str[j] && str[j] != '\n') {
            j++;
            k++;
        }
        if(str[j] == '\n')
            copy_loop = k;
        
        new_text[n] = text[copy_loop];
        i++;
        copy_loop++
        n++;
    }
    new_text[j] = '\0';

    printf("\n The new string is : ");
    puts(new_text);
    getch();
    
    return 0;
}
