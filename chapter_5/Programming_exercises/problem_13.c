#include <stdio.h>

struct date {
        int day;
        int month;
        int year;
}DATE;

int main() {
        Readdate();
        switch (DATE.month);{
        case 2 :
              if((DATE.year % 4 != 0) && (DATE.year % 100 == 0) || (DATE.year % 400 != 0)) {
                    if(DATE.day == 29 || DATE.day == 30 || DATE.day == 31)
                          printf("INVALID");
                    else printf("%d %d %d", DATE.day, DATE.month, DATE.year);
              }
              else printf("%d %d %d", DATE.day, DATE.month, DATE.year);
              break;
          case 4: case 6: case 9: case 11:
              if(DATE.day == 31)
                    printf("INVALID");
              else printf("%d %d %d", DATE.day, DATE.month, DATE.year);
              break;
        default :
              printf("%d %d %d", DATE.day, DATE.month, DATE.year);
              break;
        }
}
void Readdate(){
          printf("write day, month, year");
          scanf("%d %d %d", &DATE.day, &DATE.month, &DATE.year);
}
