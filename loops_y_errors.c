#include <stdio.h>

int main() {

  //For loop method
  for (int cntr = 1; cntr <= 100; cntr++){
    if (cntr % 3 == 0 && cntr % 5 == 0) {
      printf("FizzBuzz\n");
    } else if (cntr % 5 == 0) {
      printf("Buzz\n");
    } else if (cntr % 3 == 0) {
      printf("Fizz\n");
    } else {
      printf("%d\n", i);
    }
  }
}