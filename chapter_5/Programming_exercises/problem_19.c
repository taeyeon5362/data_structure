#include <stdio.h>

struct time {
        int hr, min, sec;
};

int main() {
        struct time start_time;
        struct time end_time;
        int hr, min, sec, cnt;
        cnt = 0;
  
        printf("Enter the start time : (hr min sec) ");
        scanf("%d %d %d", &start_time.hr, &start_time.min, &start_time.sec);
        printf("Enter the end time : (hr min sec) ");
        scanf("%d %d %d", &end_time.hr, &end_time.min, &end_time.sec);

        hr = end_time.hr - start_time.hr;
        min = end_time.min - start_time.min;
        sec = end_time.sec - start_time.sec;

        if(min < 0) {
              hr -= 1;
              min = 60 - start_time.min + end_time.min;
        }
        if(sec < 0) {
              min -= 1;
              sec = 60 - start_time.sec + end_time.sec;
        }
  
        printf("Print 'GOOD Day' once every seconds \n ");
        for(int i = 0; i < cnt; i++) {
              printf("GOOD Day\n");
        }
        return 0;
}
