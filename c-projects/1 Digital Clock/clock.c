//Digital Clock Program made with C language

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void fill_time(char*, int);
void fill_date(char*);
int input_format();
void clear_screen();

int main() {
  char time[50], date[100];
  int format = input_format();

  while (1) {
    fill_time(time, format);
    fill_date(date);
    clear_screen();
    printf("Current Time: %s\n", time);
    printf("Date: %s\n", date);
    sleep(1); // Sleep for 1 second
  }
  return 0;
}

void clear_screen() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif  
}

int input_format() {
  int format;
  printf("\nChoose the time format: ");
  printf("\n1. 24 Hour format");
  printf("\n2. 12 Hour format (default)");
  printf("\nMake a choice(1/2): ");
  scanf("%d", &format);
  return format;
}

void fill_date(char* buffer) {
  time_t realtime;  // Changed to realtime as per the request
  struct tm *raw_time;  // Changed to raw_time as per the request

  time(&realtime);
  raw_time = localtime(&realtime);
  strftime(buffer, 100, "%A %B %d %Y", raw_time);
}

void fill_time(char* buffer, int format) {
  time_t realtime;  // Changed to realtime as per the request
  struct tm *raw_time;  // Changed to raw_time as per the request

  time(&realtime);
  raw_time = localtime(&realtime);
  if (format == 1) {
    strftime(buffer, 50, "%H:%M:%S", raw_time);
  } else {
    strftime(buffer, 50, "%I:%M:%S %p", raw_time);
  }
}
