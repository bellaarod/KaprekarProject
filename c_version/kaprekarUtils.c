/**
 * This function tests whether the given input
 * is a Kaprekar Number or not
 */

 #include <math.h>
 #include "kaprekarUtils.h"

int isKaprekar(int n) {

  if(n < 1) {
   return 0;
  }

  int i;
  //compute the square
  long square = n * (long) n;
  //compute the number of digits of the square
  long modulus = 1;
  long first, second;

  //for each possible "split" of the square...
  for(i=1; i <= 10; i++) {
    //increase the modulus by a factor of 10
    modulus = modulus * 10;

    //split the square into two parts
    first = square / modulus;
    second = square % modulus;

    //test if the split makes a Kaprekar number
    //the second part cannot be zero and if
    //the sum of the two parts is equal to n, then it is
    if(second > 0 && n == first + second) {
      return 1;
    }
  }
  return 0;

}
