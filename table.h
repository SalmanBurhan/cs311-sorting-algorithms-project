#include <stdlib.h>

/* Print Helper Libraries */
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

/***************** START ********************
********** TABLE HELPER FUNCTIONS ***********
********************************************/

/*** TABLE COLUMN WIDTH ***/
const int COLUMN_WIDTH = 15;
/**************************/

/**
 * @brief Append Column Value To Current Result Table Row
 *
 * @param[in] t - Some Appended Generic `T`
 */
template <typename T>
void appendTableRow(T t) {
  if (is_arithmetic<T>::value) {
    cout << left << setw(COLUMN_WIDTH) << setfill(' ') << fixed << setprecision(8) << t;
  } else {
    cout << left << setw(COLUMN_WIDTH) << setfill(' ') << t;
  }
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
void tableRow(T method, T order, U size, V runtime) {
  appendTableRow(method);
  appendTableRow(order);
  appendTableRow(size);
  appendTableRow(runtime);
  cout << endl;
}

/**
 * @brief Print The Column Names Of Results Table
 */
void tableHeader() {
  tableRow("METHOD", "ORDER", "SIZE", "RUNTIME");
}

/**
 * @brief Print An Empty Table Row
 */
void tableSectionSeparator() {
  tableRow("", "", "", "");
}

/******************* END ********************
********** TABLE HELPER FUNCTIONS ***********
********************************************/
