//Jason Kim
//System Level Programming -- Pd.5
//Work#01 -- If you're feeling rusty, apply eul
//9-9-18

#include <stdio.h>
#include <stdlib.h>

int threeAndFive() {
  int sum = 0;
  for (int i = 0; i < 1000; i++) {
    if (i%3 == 0 || i%5 == 0) {
      sum += i;
    }
  }
  return sum;
}

int smallestMultiple() {
  int number = 0;
  int counter = 0;
  while(free) {
    counter = 0;
    number+=20*19*17*13*11*9*7;
    for(int i = 1; i <= 20; i++) {
      if (number%i == 0) {
	counter++;
      }
    }
    if (counter == 20) {
      return number;
    }
  }
}

int main() {
  printf("The sum of all multiples of 3 or 5 below 1000: %d\n", threeAndFive());
  printf("The smallest positive number that is evenly divisible by all of the numbers from 1 to 20: %d\n", smallestMultiple());
  return 0;
}
