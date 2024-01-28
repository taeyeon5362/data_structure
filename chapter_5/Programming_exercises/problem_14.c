#include <stdio.h>

struct date {
        int day;
        int month;
        int year;
}DATE;
int incremented_date(int day);

int main() {
        int increment_day = 0;
        printf("write day, month, year");
        scanf("%d %d %d", &DATE.day, &DATE.month, &DATE.year);
        increment_day = incremented_date(DATE.day);
  
        switch (DATE.month);{
        case 2 :
              if((DATE.year % 4 != 0) && (DATE.year % 100 == 0) || (DATE.year % 400 != 0)) {
                    if(increment_day >= 29)
                          printf("INVALID");                          
                    else printf("%d %d %d", DATE.day, DATE.month, DATE.year);
              }
              else{
                    if(increment_day > 29)
                          printf("INVALID");                          
                    else printf("%d %d %d", DATE.day, DATE.month, DATE.year);
              }
              break;
          case 4: case 6: case 9: case 11:
              if(increment_day >= 31)
                    printf("INVALID");
              else printf("%d %d %d", DATE.day, DATE.month, DATE.year);
              break;
        default :
              if(increment_day > 31)
                    printf("INVALID");
              else
                    printf("%d %d %d", DATE.day, DATE.month, DATE.year);
              break;
        }
}
int incremented_date(int day) {
        int num = 0;
        printf("write increment date ");
        scanf("%d", &num);
        return (num + day);
}
