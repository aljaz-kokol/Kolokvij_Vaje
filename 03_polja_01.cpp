/*
 * Napišite program, ki obrne podano polje.
 * Podano je polje s števili [1, 2, 3, 4, 5, 6]
 * Vaš program more obrniti in izpisati novo nastalo polje
 *
 * Pricakovan izpis: 6 5 4 3 2 1
 * */
#include <iostream>

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
}

void swap(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void reverseArray(int arr[], int size) {
    int lastIndex = size - 1;
    for (int i = 0; i < (size / 2); i++)
        swap(arr[i], arr[lastIndex - i]);
}

int main() {
    const int SIZE = 6;
    int arr[SIZE] = {1, 2, 3, 4, 5, 6};
    reverseArray(arr, SIZE);
    printArray(arr, SIZE);
    return 0;
}
