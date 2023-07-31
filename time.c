#include<stdio.h>
#include <time.h>
int main(){
     time_t currentTime;
      currentTime = time(NULL);
      char buffer[80];
      struct tm *timeInfo;
      timeInfo = localtime(&currentTime);
      strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeInfo);
      printf("Current time: %s\n", buffer);
      return 0;
}