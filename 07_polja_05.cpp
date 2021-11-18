/*
 * Napisite progam, ki izpise vsa liha mesta polja.
 * Podnao je naslednjo polje: [11, 12, 13, 14, 15, 16, 17]
 * Pricakovan izpis: 11 13 14 15
 * */
#include <iostream>

void printOddIndexes(const int arr[], int size) {
    /*
     * Malo cudno navodilo
     *      Verjetno mislijo mesta kot: index 0 je 1. mesto, index 1 je 2. mesto
     *          1.mesto --> 11, 3.mesto --> 13, 5.mesto --> 15, 7.mesto --> 17
     *      Lahko pa mislijo kot vrednosti polja --> te bi dal if stavek pa prevero ce je stevilo deljivo z 2
     * */
    for (int i = 0; i < size; i++) {
        if ((i + 1) % 2 == 1)
            std::cout << arr[i] << " ";
    }
}

int main() {
    const int SIZE = 7;
    int arr[SIZE] = {11, 12, 13, 14, 15, 16, 17};
    printOddIndexes(arr, SIZE);
    return 0;
}
