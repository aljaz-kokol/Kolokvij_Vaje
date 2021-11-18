/*
 * Napisite program, ki izpise piramido z uporabo znaka *.
 * Program v main prebere celo stevilo in ga poslje v funkcijo piramida,
 * ki izrsire piramido z vsemi 4 stranicami. Uporabi isto funkcjo tako za piramide
 * s sodo kot tudi za piramide z liho sirino
 * */
#include <iostream>

void repeatChar(int num, char c) {
    for (int i = 0; i < num; i++)
        std::cout << c;
}

void piramida(int num) {
    bool isEven = num % 2 == 0;
    int rowLimit = isEven ? (num / 2) : (num / 2) + 1;
    int numOfSpaces = isEven ? (num / 2) - 1 : num / 2;

    repeatChar(num + 2, '-');
    std::cout << '\n';

    for (int i = 0; i < rowLimit; i++) {
        std::cout << "|";
        repeatChar(numOfSpaces - i, ' ');
        for (int j = 0; j <= i; j++) {
            std::cout << '*';
        }
        int starLimit = isEven ? i + 1 : i;
        for (int j = 0; j < starLimit; j++) {
            std::cout << '*';
        }
        repeatChar(numOfSpaces - i, ' ');
        std::cout << '|';
        std::cout << '\n';
    }
    repeatChar(num + 2, '-');
}

int main() {
    int size = 0;
    std::cout << "Vnesi stevilo: ";
    std::cin >> size;
    piramida(size);
    return 0;
}
