#include <stdio.h>
#include <conio.h>

int main() {
    char Dest_str[100], Source_str[100];
    int i = 0, j = 0;
    
    printf("\n Enter the source string : ");
    gets(Source_str);
    printf("\n Enter the destination string : ");
    gets(Dest_str);

    while(Dest_str[i] != '\n') 
        i++;
    while(Source_str[j] != '\n') {
        Dest_str[i] = Source_str[j];
        i++;
        j++;
    }

    Dest_str[i] = '\n';
    printf("\n After appending, the destination string is : ");
    puts(Dest_str);
    getch();
    
    return 0;
}
