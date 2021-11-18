/*
 * Napisite program, ki pomakne vse elemente polja za ena v desno
 * Podano je polje z znaki ['A', 'B', 'C', 'D', 'E', 'F']
 * Vas program more vsak element v polju prestaviti z eno mesto v desno, ter izpisati polje
 *
 * Pricakovan izpis: F A B C D E
 * */
#include <iostream>
#include <cstring>

void printArray(const char arr[]) {
    const int size = std::strlen(arr);
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
}

void moveRight(char arr[]) {
    const int size = std::strlen(arr);
    char temp = arr[0];
    for (int i = 0; i < size; i++) {
        int nextIndex = (i + 1 >= size) ? 0 : i + 1;
        char newTemp = arr[nextIndex];
        arr[nextIndex] = temp;
        temp = newTemp;
    }
}

int main() {
    const int SIZE = 6;
    char arr[SIZE + 1] = {'A', 'B', 'C', 'D', 'E', 'F', '\0'}; // +1 --> zaradi null znaka '\0'
    moveRight(arr);
    printArray(arr);
    return 0;
}
