#include<iostream>
using namespace std;

//variabel global
int n;
int pilihan;

//input angka
void inputAngka()
{
    cout<<"Masukkan angka : ";
    cin>>n;
}

// Fungsi untuk mengecek bilangan prima
bool Prima(int n)
{
    if (n <= 1){
        return false;
    }

    int i = 2;
    while (i <= n/2){
        if (n % i == 0){
            return false;
        }
        i++;

    }
    return true;
}

// Fungsi untuk mengecek bilangan fibonacci
bool Fibonacci(int n) {
    int a = 0, b = 1, c;
}