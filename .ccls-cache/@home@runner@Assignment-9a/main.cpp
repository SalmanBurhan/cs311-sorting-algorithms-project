/*
 * Created on Thu Dec 01 2020
 *
 * File Name:  main.cpp
 * File Type: Implementation File - main.cpp
 * Authors: Salman Burhan, Alecsander Gonzalez
 *
 * Hypothesis:
 * Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec ut luctus
 * lorem. Donec quis vulputate lorem. Praesent sed consequat erat. Ut vitae
 * bibendum tellus, et luctus diam. Donec fermentum lorem sagittis cursus
 * consequat. Interdum et malesuada fames ac ante ipsum primis in faucibus.
 * Vivamus tincidunt commodo libero eu sodales.
 */

/* Supporting Files */
#include "table.h"
#include "sorting.h"
#include "utils.h"

/* Supporting Libraries */
#include <vector>
#include <chrono>
#include <time.h>

#include <stdlib.h>
using namespace std;

// main test function
void testA(int arry[], int size) {

  clock_t _start, _end;
  double cpu_time_used;

  std::chrono::system_clock::time_point start;
  std::chrono::system_clock::time_point stop;
  std::chrono::duration<double> duration;
  std::chrono::duration<double, std::milli> duration_ms;

  /**************************
  **** FILL ARRAY ASCEND ****
  **************************/
  
  fillAsc(arry, size);

  /**************************
  ******** QUICKSORT ********
  ***** ASCENDING ORDER *****
  **************************/

  // Clock Start Time
  start = std::chrono::high_resolution_clock::now();
  _start = clock();

  // Sort
  quickSort(arry, size, size - 1);

  // Clock End Time
  stop = std::chrono::high_resolution_clock::now();
  _end = clock();

  // Runtime in Milliseconds
  duration = stop - start;
  duration_ms = duration;
  cpu_time_used = ((double)(_end - _start)) / CLOCKS_PER_SEC;

  printTableRow("Quick Sort", "Ascending", size, duration.count(),
                cpu_time_used);

  /**************************
  ***** INSERTION SORT ******
  ***** ASCENDING ORDER *****
  **************************/

  // Clock Start Time
  start = std::chrono::high_resolution_clock::now();
  _start = clock();

  // Sort
  insertionSort(arry, size);

  // Clock End Time
  stop = std::chrono::high_resolution_clock::now();
  _end = clock();

  // Runtime in Milliseconds
  duration = stop - start;
  duration_ms = duration;
  cpu_time_used = ((double)(_end - _start)) / CLOCKS_PER_SEC;

  printTableRow("Insertion Sort", "Ascending", size, duration.count(),
                cpu_time_used);

  /**************************
  *** FILL ARRAY DESCEND ****
  **************************/
  
  fillDec(arry, size);

  /**************************
  ******** QUICKSORT ********
  ***** DESCENDING ORDER ****
  **************************/

  // Clock Start Time
  start = std::chrono::high_resolution_clock::now();
  _start = clock();

  // Sort
  quickSort(arry, size, size - 1);

  // Clock End Time
  stop = std::chrono::high_resolution_clock::now();
  _end = clock();

  // Runtime in Milliseconds
  duration = stop - start;
  cpu_time_used = ((double)(_end - _start)) / CLOCKS_PER_SEC;

  printTableRow("Quick Sort", "Descending", size, duration.count(),
                cpu_time_used);

  /**************************
  ***** INSERTION SORT ******
  **** DESCENDING ORDER *****
  **************************/

  // Clock Start Time
  start = std::chrono::high_resolution_clock::now();
  _start = clock();

  // Sort
  insertionSort(arry, size);

  // Clock End Time
  stop = std::chrono::high_resolution_clock::now();
  _end = clock();

  // Runtime in Milliseconds
  duration = stop - start;
  duration_ms = duration;
  cpu_time_used = ((double)(_end - _start)) / CLOCKS_PER_SEC;

  printTableRow("Insertion Sort", "Descending", size, duration.count(),
                cpu_time_used);

  /**************************
  **** FILL ARRAY RANDOM ****
  **************************/

  fillRand(arry, size);

  /**************************
  ******** QUICKSORT ********
  ******* RANDOM ORDER ******
  **************************/

  // Clock Start Time
  start = std::chrono::high_resolution_clock::now();
  _start = clock();

  // Sort
  quickSort(arry, size, size - 1);

  // Clock End Time
  stop = std::chrono::high_resolution_clock::now();
  _end = clock();

  // Runtime in Milliseconds
  duration = stop - start;
  duration_ms = duration;
  cpu_time_used = ((double)(_end - _start)) / CLOCKS_PER_SEC;

  printTableRow("Quick Sort", "Random", size, duration.count(), cpu_time_used);

  /**************************
  ****** INSERTION SORT *****
  ******* RANDOM ORDER ******
  **************************/

  // Clock Start Time
  start = std::chrono::high_resolution_clock::now();
  _start = clock();

  // Sort
  insertionSort(arry, size);

  // Clock End Time
  stop = std::chrono::high_resolution_clock::now();
  _end = clock();

  // Runtime in Milliseconds
  duration = stop - start;
  duration_ms = duration;
  cpu_time_used = ((double)(_end - _start)) / CLOCKS_PER_SEC;

  printTableRow("Insertion Sort", "Random", size, duration.count(),
                cpu_time_used);
}

int main() {
  // samples:
  // 1,2,4,8,16,32,64,128,256,512, 1024, 2048, 4096, 8192, 1634
  // 32768, 65536, 131072, 262144, 500,000

  // master array to be used. fill with all sizes to be tested

  /* Author: Alecsander Gonzalez *
  int masterA[] = {1,    2,     4,     8,      16,     32,    64,
                   128,  256,   512,   1024,   2048,   4096,  8192,
                   1634, 32768, 65536, 131072, 262144, 500000};
  *******************************/

  vector<int> sampleArrays = {1,    2,     4,     8,      16,     32,    64,
                              128,  256,   512,   1024,   2048,   4096,  8192,
                              1634, 32768, 65535, 131072, 262144, 500000};

  // defaults
  /*
  int arr[1];
  int arr1[2];
  int arr2[4];
  int arr3[8];
  int arr4[16];
  int arr5[32];
  int arr6[64];
  int arr7[128];
  int arr98[256];
  int arr10[512];
  int arr11[1024];
  int arr12[2048];
  int arr13[4096];
  int arr14[8192];
  int arr15[1634];
  int arr16[32768];
  int arr17[65536];
  int arr18[131072];
  int arr19[262144];
  int arr20[500000];
  */

  printTableHeader();

  /* Author: Alecsander Gonzalez *
  for (int i = 0; i < sizeof(masterA); i++) {
    int aHold[masterA[i]];       // make array of size specified by master
    array testA(aHold, sizeof(aHold)); // test said array cout << endl;
  }
  *******************************/

  for (int size : sampleArrays) {
    int arr[size];    // Initialize a primitive array of sample size.
    testA(arr, size); // Run tests on said array.
    printTableRow("", "", "", "", "");
  }
}
