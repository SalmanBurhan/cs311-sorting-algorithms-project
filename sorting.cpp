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
  for (int n = 1; n < size; n++) {
    int e = array[n];
    int j = n - 1;

    while (e < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }

    array[j + 1] = e;
  }
}

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
