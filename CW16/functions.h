#pragma once
#include<iostream>
using namespace std;

//filling arrays
double fill(double min, double max);
void fillArrInt(int* arr, size_t size);

void fillArrDouble(double* arr, size_t size);

void fillArrChar(char* arr, size_t size);

//printing arrays
void printArrInt(int* arr, size_t size);

void printArrDouble(double* arr, size_t size);

void printArrChar(char* arr, size_t size);


//finding min elem
int IntArrMinElem(int* arr, size_t size);

double DoubleArrMinElem(double* arr, size_t size);

char CharArrMinElem(char* arr, size_t size);


//finding max elem
int IntArrMaxElem(int* arr, size_t size);

double DoubleArrMaxElem(double* arr, size_t size);

char CharArrMaxElem(char* arr, size_t size);


//array sorting
void IntArrSort(int* arr, size_t size);

void DoubleArrSort(double* arr, size_t size);

void CharArrSort(char* arr, size_t size);

//array editing
void IntArrEdit(int* arr, size_t size, int index, int newValue);

void DoubleArrEdit(double* arr, size_t size, int index, double newValue);

void CharArrEdit(char* arr, size_t size, int index, char newValue);



#ifdef INTEGER
#define fillArr fillArrInt
#define printArr printArrInt
#define ArrMinElem IntArrMinElem
#define ArrMaxElem IntArrMaxElem
#define ArrSort IntArrSort
#define ArrEdit IntArrEdit
#endif

#ifdef DOUBLE
#define fillArr fillArrDouble
#define printArr printArrDouble
#define ArrMinElem DoubleArrMinElem
#define ArrMaxElem DoubleArrMaxElem
#define ArrSort DoubleArrSort
#define ArrEdit DoubleArrEdit
#endif

#ifdef CHAR
#define fillArr fillArrChar
#define printArr printArrChar
#define ArrMinElem CharArrMinElem
#define ArrMaxElem CharArrMaxElem
#define ArrSort CharArrSort
#define ArrEdit CharArrEdit
#endif