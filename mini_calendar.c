#include <stdio.h>
#include <stdbool.h>

//Function that returns if the year given is a leap year or not
//Conditions for leap year: divisible by 4 and NOT divisible by 100 except when divisible by 400
//Therefore, if it's not divisible by 400 it should also not be divisible by 100
bool is_leap_year(int year){
  if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
    return true; 
  } else {
    return false;
  }
}

//January starts at array[1]
//12 months in a year 
//12 elements + null terminating character + placeholder = size of 14
int days_in_month[14] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//Process: first, have to know # of days of all months
//daysToNextMonth = daysOfMonth - currentDate
//newDate = daysToAdd - daysToNextMonth 
//if we reach end of the month, change month
//Edge case: December 31st --> change year
void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add){
  int days_left_in_month = 0;
  while(days_left_to_add > 0){
    days_left_in_month = days_in_month[*mm] - *dd;
    if(*mm == 2 && is_leap_year(*yy) == true){
      printf("LEAP YEAR: %i\n", *yy);
      days_left_in_month++;
    }

    if(days_left_to_add > days_left_in_month){
      //subtract days left + 1 to pass to the next month
      //instead of landing on the last day of the month
      days_left_to_add -= days_left_in_month + 1;
      *dd = 1;//start on the first day of the month
      if(*mm == 12){//if it's the end of Dec. 
        *mm = 1;//move to January
        *yy += 1;//move to a new year
      }
      else {
        *mm += 1;
      }
    } else {//if there are enough days in the month
      *dd += days_left_to_add;//add the days to the month
      days_left_to_add = 0; //all days added
    }
  }
}


int main() {

  int mm, dd, yy, days_left_to_add;
  printf("Enter a date between 1800 and 10000 inf the format mm dd yy and provide the number of days to add to this date: ");
  scanf("%d %d %d %d", &mm, &dd, &yy, &days_left_to_add);

  if(mm < 1 || mm > 12 || dd < 1 || dd > 31 || yy < 1800 || yy > 10000){
    printf("Invalid input, please try again!\n");
  } else {
    add_days_to_date(&mm, &dd, &yy, days_left_to_add);
    printf("%i %i %i\n", mm, dd, yy);
  }
}