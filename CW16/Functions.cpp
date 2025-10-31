#include <iostream>
using namespace std;

//filling arrays
double fill(double min, double max) {
	return min + double(rand()) / RAND_MAX * (max - min);
}

void fillArrInt(int* arr, size_t size) {
	srand(time(nullptr));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
	cout << endl;
}

void fillArrDouble(double* arr, size_t size) {
	srand(time(nullptr));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = fill(10,20);
	}
	cout << endl;
}

void fillArrChar(char* arr, size_t size) {
	srand(time(nullptr));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = 'a' + rand() % 26;
	}

	cout << endl;
}


//printing arrays
void printArrInt(int* arr, size_t size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printArrDouble(double* arr, size_t size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printArrChar(char* arr, size_t size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


//finding min elem
int IntArrMinElem(int* arr, size_t size) {
	int min = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < min) {
			min=arr[i];
		}
	}
	return min;
}

double DoubleArrMinElem(double* arr, size_t size) {
	int min = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

char CharArrMinElem(char* arr, size_t size) {
	int min = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}


//finding max elem
int IntArrMaxElem(int* arr, size_t size) {
	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

double DoubleArrMaxElem(double* arr, size_t size) {
	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

char CharArrMaxElem(char* arr, size_t size) {
	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}


//array sorting
void IntArrSort(int* arr, size_t size) {
		for (int i = 0; i < size - 1; ++i) {
			for (int j = 0; j < size - i - 1; ++j) {
				if (arr[j] > arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
}

void DoubleArrSort(double* arr, size_t size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void CharArrSort(char* arr, size_t size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				char temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//array editing
void IntArrEdit(int* arr, size_t size, int index, int newValue) {
	if (index>=0 && index<size)
	{
		arr[index] = newValue;
	}

}

void DoubleArrEdit(double* arr, size_t size, int index, double newValue) {
	if (index >= 0 && index < size)
	{
		arr[index] = newValue;
	}

}

void CharArrEdit(char* arr, size_t size, int index, char newValue) {
	if (index >= 0 && index < size)
	{
		arr[index] = newValue;
	}

}


