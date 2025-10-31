#define INTEGER
//#define DOUBLE
//#define CHAR

#include <iostream>
#include "functions.h"
using namespace std;


int main() {
#ifdef INTEGER
    const size_t size = 10;
    int arr[size];
    fillArr(arr, size);
    cout << "Array (int): ";
    printArr(arr, size);

    cout << "Min element: " << ArrMinElem(arr, size) << endl;
    cout << "Max element: " << ArrMaxElem(arr, size) << endl;

    ArrSort(arr, size);
    cout << "Sorted array: ";
    printArr(arr, size);

    ArrEdit(arr, size, 2, 999);
    cout << "New array: ";
    printArr(arr, size);
#endif


#ifdef DOUBLE
    const size_t size = 5;
    double arr[size];
    fillArr(arr, size);
    cout << "Array (ädouble): ";
    printArr(arr, size);

    cout << "Min element: " << ArrMinElem(arr, size) << endl;
    cout << "Max element: " << ArrMaxElem(arr, size) << endl;

    ArrSort(arr, size);
    cout << "Sorted array: ";
    printArr(arr, size);

    ArrEdit(arr, size, 1, 999.99);
    cout << "New array: ";
    printArr(arr, size);
#endif


#ifdef CHAR
    const size_t size = 5;
    char arr[size];
    fillArr(arr, size);
    cout << "Array (char): ";
    printArr(arr, size);

    cout << "Min element: " << ArrMinElem(arr, size) << endl;
    cout << "Max element: " << ArrMaxElem(arr, size) << endl;

    ArrSort(arr, size);
    cout << "Sorted array: ";
    printArr(arr, size);

    ArrEdit(arr, size, 3, 'Z');
    cout << "New array: ";
    printArr(arr, size);
#endif
}