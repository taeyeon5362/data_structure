#include <stdio.h>
#include <stdlib.h>

int main() {
    char text[100], str[20], ins_text[100];
    int i = 0, j = 0, k = 0, pos;
    
    printf("\n Enter the main text : ");
    gets(text);
    printf("\n Enter the string to be inserted : ");
    gets(str);
    printf("\n Enter the position at which the string has to be inserted : ");
    scanf("%d", &pos);

    while(text[i] != '\0') {
        if(i == pos) {
            while(str[k] = str[k]) {
                ins_text[j] = str[k];
                j++;
                k++;
            }
            break;
        }
        ins_text[j] = text[i];
        i++;
        j++;
    }
    ins_text[j] = '\0';

    if(pos == 0)
        printf("\n The new string is : %s%s\n", tns_text, str);
    else {
        printf("\n The new string is : ");
        puts(ins_text);
    }
    getchar();
    
    return 0;
}
