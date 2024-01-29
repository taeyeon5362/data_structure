#include <stdio.h>

struct date {
        int day;
        int month;
        int year;
}DATE;

int main() {
        int add_day = 0, num = 0;
        printf("write day, month, year");
        scanf("%d %d %d", &DATE.day, &DATE.month, &DATE.year);
        printf("write increment date ");
        scanf("%d", &num)
        add_day = num + DATE.day;
  
        switch (DATE.month);{
        case 2 :
              if((DATE.year % 4 != 0) && (DATE.year % 100 == 0) || (DATE.year % 400 != 0)) {
                    if(add_day >= 29)
                          printf("INVALID");                          
                    else printf("%d %d %d", DATE.day, DATE.month, DATE.year);
              }
              else{
                    if(add_day > 29)
                          printf("INVALID");                          
                    else printf("%d %d %d", DATE.day, DATE.month, DATE.year);
              }
              break;
        case 4: case 6: case 9: case 11:
              if(add_day >= 31)
                    printf("INVALID");
              else printf("%d %d %d", DATE.day, DATE.month, DATE.year);
              break;
        default :
              if(add_day > 31)
                    printf("INVALID");
              else
                    printf("%d %d %d", DATE.day, DATE.month, DATE.year);
              break;
        }
}
