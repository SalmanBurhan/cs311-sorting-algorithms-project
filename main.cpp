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

  std::chrono::steady_clock::time_point start;
  std::chrono::steady_clock::time_point stop;
  std::chrono::duration<double, std::milli> duration_ms;

  /**************************
  ******** QUICKSORT ********
  ***** ASCENDING ORDER *****
  **************************/

  // Fill Ascending
  fillAsc(arry, size);

  // Clock Start Time
  start = std::chrono::steady_clock::now();

  // Sort
  quickSort(arry, 0, size - 1);

  // Clock End Time
  stop = std::chrono::steady_clock::now();

  // Runtime in Milliseconds
  duration_ms = stop - start;

  tableRow("Quick", "Ascending", size, duration_ms.count());

  /**************************
  ***** INSERTION SORT ******
  ***** ASCENDING ORDER *****
  **************************/

  // Clock Start Time
  start = std::chrono::steady_clock::now();

  // Fill Ascending
  fillAsc(arry, size);

  // Sort
  insertionSort(arry, size);

  // Clock End Time
  stop = std::chrono::steady_clock::now();

  // Runtime in Milliseconds
  duration_ms = stop - start;

  tableRow("Insertion", "Ascending", size, duration_ms.count());

  /**************************
  ******** QUICKSORT ********
  ***** DESCENDING ORDER ****
  **************************/

  // Fill Descending
  fillDec(arry, size);

  // Clock Start Time
  start = std::chrono::steady_clock::now();

  // Sort
  quickSort(arry, 0, size - 1);

  // Clock End Time
  stop = std::chrono::steady_clock::now();

  // Runtime in Milliseconds
  duration_ms = stop - start;

  tableRow("Quick", "Descending", size, duration_ms.count());

  /**************************
  ***** INSERTION SORT ******
  **** DESCENDING ORDER *****
  **************************/

  // Fill Descending
  fillDec(arry, size);

  // Clock Start Time
  start = std::chrono::steady_clock::now();

  // Sort
  insertionSort(arry, size);

  // Clock End Time
  stop = std::chrono::steady_clock::now();

  // Runtime in Milliseconds
  duration_ms = stop - start;

  tableRow("Insertion", "Descending", size, duration_ms.count());


  /**************************
  ******** QUICKSORT ********
  ******* RANDOM ORDER ******
  **************************/

  // Fill Random
  fillRand(arry, size);

  // Clock Start Time
  start = std::chrono::steady_clock::now();

  // Sort
  quickSort(arry, 0, size - 1);

  // Clock End Time
  stop = std::chrono::steady_clock::now();

  // Runtime in Milliseconds
  duration_ms = stop - start;

  tableRow("Quick", "Random", size,duration_ms.count());

  /**************************
  ****** INSERTION SORT *****
  ******* RANDOM ORDER ******
  **************************/

  // Fill Random
  fillRand(arry, size);

  // Clock Start Time
  start = std::chrono::steady_clock::now();

  // Sort
  insertionSort(arry, size);

  // Clock End Time
  stop = std::chrono::steady_clock::now();

  // Runtime in Milliseconds
  duration_ms = stop - start;

  tableRow("Insertion", "Random", size, duration_ms.count());
}

int main() {
  // master vector to be used to initialize arrays of size n to be tested.
  vector<int> sampleArrays = {1,    2,     4,     8,      16,     32,    64,
                              128,  256,   512,   1024,   2048,   4096,  8192,
                              16384, 32768, 65536, 131072};

  tableHeader();
  for (int size : sampleArrays) {
    int arr[size];    // Initialize a primitive integer array of sample size.
    testA(arr, size); // Run tests on said array.
    tableSectionSeparator(); // Print empty row between each sample size.
  }
 }
