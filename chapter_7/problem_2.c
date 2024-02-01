#include<stdio.h>

int main() {
        char val[] = { 'a', 'b', '+' };
        char temp;

        printf("\n---BEFORE\n");
        for(int i = 0; i < 3; i++) {
              printf("\t%c", val[i]);
        }

        temp = val[1];
        val[1] = val[2];
        val[2] = temp;

        printf("\n---AFTER\n");
        for(int i = 0; i < 3; i++) {
              printf("\t%c", val[i]);
        }
}
