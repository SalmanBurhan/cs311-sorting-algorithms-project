#include "utils.h"

/***************** BEGIN ********************
********* Array Population Methods **********
********************************************/

// for filling an array in ascending order
void fillAsc(int arry[], int size) {
  for (int i = 0; i < size; i++) {
    arry[i] = i;
  }
}

// for filling an array in decending order
void fillDec(int arry[], int size) {
  int j = size - 1;
  for (int i = 0; i < size; i++) {
    arry[i] = j;
    j--;
  }
}

// for filling an array with random integers
void fillRand(int arry[], int size) {
  int mrand = 0;
  for (int i = 0; i < size; i++) {
    mrand = rand(); // may change to rand % size. we shall see
    arry[i] = mrand;
  }
}

/******************* END ********************
********* Array Population Methods **********
********************************************/