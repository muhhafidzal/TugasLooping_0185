#include <iostream>
using namespace std;

// Variabel global
int n;
int pilihan;

// Fungsi untuk cek bilangan prima
bool isPrima(int x) {
    if (x <= 1) return false;

    int i = 2;
    while (i <= x / 2) {
        if (x % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// Fungsi untuk cek bilangan Fibonacci
bool isFibonacci(int x) {
    int a = 0, b = 1, c = 0;

        while (c < x) {
        c = a + b;
        a = b;
        b = c;
    }

     return (c == x || x == 0);
}