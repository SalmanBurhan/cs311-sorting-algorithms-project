#include "sorting.h"

/***************** BEGIN ********************
******* INSERTION SORT IMPLEMENTATION *******
********************************************/

/**
 * Main Function
 *
 * @param[in, out] array - The Array To Be Sorted
 * @param[in] size - The Size Of The Aforementioned Array
 */
void insertionSort(int array[], int size) {
  for (int n = 0; n < size; n++) {
    int e = array[size];
    int j = n - 1;

    while (e < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }

    array[j + 1] = e;
  }
}

/*
 * @brief Original Insertion Sort Implementation
 * Author: Alecsander Gonzalez

//insertion sort
void insertionSort(int array[], int index)
{
  for(int i=lowindex; i<index + 1; i++)
    {
        int temp = array[i];
        int j= i-1;
        while(j>=0 && temp <= array[j])    //lowest sinks
        {
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = temp;
    }
}
 */

/****************** END *********************
******* INSERTION SORT IMPLEMENTATION *******
********************************************/

/***************** BEGIN ********************
********* QUICK SORT IMPLEMENTATION *********
*********************************************/

/**
 * Helper Function ==> Swap
 *
 * @param[in] a, b - Pointer References To Items To Be Swapped
 */
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

/**
 * Helper Function ==> Partition
 *
 * @param[in, out] array - The Array To Be Sorted
 * @param[in] low, high - Low and High Indexes
 */
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);
  return i + 1;
}

/**
 * Main Function
 *
 * @param[in, out] array - The Array To Be Sorted
 * @param[in] low, high - Low and High Indexes
 */
void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pivot = partition(array, low, high);
    quickSort(array, low, pivot - 1);
    quickSort(array, pivot + 1, high);
  }
}

/****************** END *********************
********* QUICK SORT IMPLEMENTATION *********
********************************************/
