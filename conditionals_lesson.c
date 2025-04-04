#include <stdio.h>

int main() {

double weight;
int x;

printf("Please enter your current earth weight in lbs: ");
scanf("%lf", &weight);

printf("Please see the following list of planets to choose from by their number:\n\n");
printf("\t1. Mercury\t2. Venus\t3. Mars\n\t4. Jupiter");
printf("\t5. Saturn\t6. Uranus\n\t7. Neptune\n\n");

printf("Which planet are you visiting? ");
scanf("%d", &x);

//Relative Gravity Table
/*
Planet        RG
1 Mercury     0.38
2 Venus       0.91
3 Mars        0.38
4 Jupiter     2.34
5 Saturn      1.06
6 Uranus      0.92
7 Neptune     1.19
*/

switch (x) {
  case 1:
    weight = weight * 0.38;
    break;
  case 2: 
    weight = weight * 0.91;
    break;
  case 3: 
    weight = weight * 0.38;
    break;
  case 4:
    weight = weight * 2.34;
    break;
  case 5:
    weight = weight * 1.06;
    break;
  case 6: 
    weight = weight * 0.92;
    break;
  case 7:
    weight = weight * 1.19;
    break;
  default: 
    printf("Invalid input. Please enter a valid number/integer.");
}

int wholeWeight = weight;
printf("\nYour weight: %d lbs.\n", wholeWeight);

}