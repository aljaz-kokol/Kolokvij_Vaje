/*
 * Napišite program, ki na intervalu, keterega določi uporabnik, izpiše vsa preštevila
 * Vneseni interval: 10, 30
 * Pričakujem izpis: 11 13 17 19 23 29
 * */

#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i < sqrt(num); i++) {
        if ((num % i) == 0)
            return false;
    }
    return true;
}

void printPrimesBetween(int low, int high) {
    for (int num = low; num <= high; num++) {
        if (isPrime(num))
            std::cout << num << " ";
    }
}

int main() {
    int low = 0;
    int high = 0;
    std::cout << "Vnesi iterval: ";
    std::cin >> low >> high;
    printPrimesBetween(low, high);

    return 0;
}
