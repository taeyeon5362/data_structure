#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100], pat[20], new_str[200], rep_pat[100];
    int i = 0, j = 0, k = 0, n = 0, copy_loop = 0, rep_index = 0;

    system("cls");
    printf("\n Enter the string : ");
    gets(str);
    printf("\n Enter the pattern to be replaced : ");
    gets(pat);
    printf("\n Enter the replacing pattern : ");
    gets(rep_pat);

    while(str[i] != '\0') {
        j = 0, k = i;
        while(str[k] == pat[j] && pat[j] != '\n') {
            k++;
            j++;
        }
        if(pat[j] == '\n') {
            copy_loop = k;
            while(rep_pat[rep_index] != '\0') {
                new_str[n] = rep_pat[rep_index];
                rep_index++;
                n++;
            }
        }
        new_str[n] = str[copy_loop];
        i++;
        copy_loop++;
        n++;
    }
    new_str[n] = '\0';

    printf("\n The new string is : ");
    puts(new_str);
    getch();
    
    return 0;
}
