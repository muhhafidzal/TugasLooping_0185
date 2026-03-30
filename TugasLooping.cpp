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

// Prosedur input angka
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> n;
}

// Prosedur tampil hasil prima
void tampilPrima() {
    if (isPrima(n))
        cout << n << " adalah bilangan prima\n";
    else
        cout << n << " bukan bilangan prima\n";
}

// Prosedur tampil hasil fibonacci
void tampilFibonacci() {
    if (isFibonacci(n))
        cout << n << " termasuk bilangan Fibonacci\n";
    else
        cout << n << " bukan bilangan Fibonacci\n";
}

// Function menu
void tampilMenu() {
    cout << "\n===== MENU =====\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih menu: ";
}

// Main program
int main() {
    
}