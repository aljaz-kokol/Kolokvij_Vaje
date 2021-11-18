/*
 * Napisite program, ki zamenja sole in lihe elemente polja.
 * Podano je polje s stevilo [1, 2, 3, 4, 5, 6]
 * Vas program more zamenjati vsa stevila na sodih mestih s sosednjimi stevili na lihih mestih in izpisati polje
 *
 * Pricakovan izpis: 2 1 4 3 6 5
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

void swapEvensWithOds(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if ((arr[i] % 2 == 1) && (arr[i + 1] % 2 == 0))
            swap(arr[i], arr[i + 1]);
    }
}

int main() {
    const int SIZE = 6;
    int arr[SIZE] = {1, 2, 3, 4, 5, 6};
    swapEvensWithOds(arr, SIZE);
    printArray(arr, SIZE);
    return 0;
}
