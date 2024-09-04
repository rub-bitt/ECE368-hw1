// hw1
#include <stdio.h>

void get_centDivision(int cents) {
  for (int quarters = cents/25; quarters >= 0; quarters--){
    cents -= quarters * 25;
    for (int dime = cents/10; dime >= 0; dime--){
      cents -= dime * 10;
      for (int nickel = cents/5; nickel >= 0; nickel--){
        cents -= nickel * 5;
        for (int penny = cents/1; penny >= 0; penny--){
          cents -= penny * 1;
          printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", quarters, dime, nickel, penny);
        }
      }
    }
  }
}

int main (void) {
  int cents = 0;
  printf("Number of cents?");
  scanf("%d", &cents);
  get_centDivision(cents);
  return 0;
}
