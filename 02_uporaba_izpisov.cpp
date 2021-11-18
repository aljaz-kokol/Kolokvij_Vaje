/*
*  Napišite program, ki iztiše kvadrat narejen iz določenega znaka, dimenzije kvadrata
 * in znak z vpisom doloci uporabnik
 * */

#include <iostream>

void printSquare(int size, char symbol) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            std::cout << symbol;
        std::cout << '\n';
    }
}

int main() {
    char symbol = 0;
    int size = 0;
    std::cout << "Vpis: ";
    std::cin >> size >> symbol;
    std::cout << "\n";
    printSquare(size, symbol);

    return 0;
}
