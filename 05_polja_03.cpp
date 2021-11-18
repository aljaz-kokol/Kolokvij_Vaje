/*
 * Napišite prorgam, ki uredi polje.
 * Podano je polje s števili [2.2, 22, 0.13, 11.1, 11, 7]
 * Vas program more s katerimkoli algoritmom urediti in izpisati polje stevil
 *
 * Pricakovan izpis: 0.13 2 2.7 7 11 11.2 22
 * */
#include <iostream>

void swap(double &num1, double &num2) {
    double temp = num1;
    num1 = num2;
    num2 = temp;
}

void bubbleSort(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < (size - 1); j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void selectionSort(double arr[], int size) {
    for (int i = 0; i < (size - 1); i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);
    }
}

void insertionSort(double arr[], int size) {
    for (int firstUnsorted = 1; firstUnsorted < size; firstUnsorted++) {
        double newElement = arr[firstUnsorted];
        int j = 0;
        for (j = firstUnsorted; j > 0 && arr[j - 1] > newElement; j--)
            arr[j] = arr[j - 1];
        arr[j] = newElement;
    }
}

void printArray(const double arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
}

int main() {
    const int SIZE = 6;
    double arr[SIZE] = {2.2, 22, 0.13, 11.1, 11, 7};
//    insertionSort(arr, SIZE);
//    selectionSort(arr, SIZE);
    bubbleSort(arr, SIZE);
    printArray(arr, SIZE);

    return 0;
}
