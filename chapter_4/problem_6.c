#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str[100], reverse_str[100], temp;
    int i = 0, j = 0, n, m;
    
    printf("\n Enter the main string : ");
    gets(str);
    printf("\n Enter the position from which to start the substring : ");
    scanf("%d", &m);
    printf("\n Enter the length of the substring : ");
    scanf("%d", &n);
    i = m;
  
    while(str[i] != '\n' && n > 0) {
        substr[j] = str[i];
        i++;
        j++;
        n--;
    }

    substr[j] = '\n';
    printf("\n The substring is :");
    puts(substr);
    getch();
    
    return 0;
}
