#include <stdlib.h>

/* Print Helper Libraries */
#include <iomanip>
#include <iostream>

using namespace std;

/***************** START ********************
********** TABLE HELPER FUNCTIONS ***********
********************************************/

/**
 * @brief Append Column Value To Current Result Table Row
 *
 * @param[in] t - Some Appended Generic `T`
 */
template <typename T>
void printTableElement(T t) {
  cout << left << setw(20) << setfill(' ') << t;
}

/**
 * @brief Append A New Row To Results Table
 *
 * @param[in] method  - Sort Method
 * @param[in] order   - Sort Order
 * @param[in] size    - Array Size
 * @param[in] runtime - Calculated Runtime
 */
template <typename T, typename U, typename V>
void printTableRow(T method, T order, U size, V runtime, V clocktime) {
  printTableElement(method);
  printTableElement(order);
  printTableElement(size);
  printTableElement(runtime);
  printTableElement(clocktime);
  cout << endl;
}

/**
 * @brief Print The Column Names Of Results Table
 */
void printTableHeader() {
  printTableRow("METHOD", "ORDER", "SIZE", "RUNTIME", "CLOCKTIME");
  cout << endl;
}

/******************* END ********************
********** TABLE HELPER FUNCTIONS ***********
********************************************/
