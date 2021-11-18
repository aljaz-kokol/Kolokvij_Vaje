/*
 * Napišite program pri katerem imamo v mainu polje celih števil [10, 12, 14, 21, 69],
 * kličete metodo z imenom "povecaj", katere parameter je polje celih števil, v metodi povecaj polju,
 * ki je parameter, povečamo vsak element za mesto na katerem se nahaja. V mainu po klicu funkcije nato izpišemo polje.
 *Pričakovan izpis: 11, 14, 17, 25, 74
 *Dodatna zahteva: V komentarju napišite zakaj se je polje v glavnem programu spremenilo
 * */
#include <iostream>

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << (i < size - 1 ? ", " : " ");
}

void povecaj(int arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] += i + 1;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {10, 12, 14, 21, 69};
    povecaj(arr, SIZE);
    // Polje se je v glavnem programu spremenilo zaradi tega, ker se polje v funkcjio prenese po referenci
    printArray(arr, SIZE);
    return 0;
}
