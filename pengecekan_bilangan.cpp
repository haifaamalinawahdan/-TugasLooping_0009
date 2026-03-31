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

    while (a <=  n){
        if (a == n){
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// Prosedur hasil prima
void hasilPrima()
{
    if (Prima(n)) {
        cout << n << "adalah bilangan prima." << endl;
    }
    else {
        cout << n << "bukan bilangan prima."<<endl;
    }
}

//Prosedur hasil fibonacci
void hasilFibonacci()
{
    if (Fibonacci(n)){
        cout << n << "adalah bilangan fibonacci." <<endl;
    }
    else {
        cout << n << "bukan bilangan fibonacci." <<endl;
    }
}

// Function menu
void tampilanMenu()
{
    cout << "\n===== MENU =====" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
}

int main (){
    while (true) {
        tampilanMenu();
        cin >> pilihan;

        switch (pilihan){
            case 1 :
               inputAngka();
               hasilPrima();
               break;

            case 2 :
               inputAngka();
               hasilFibonacci();
               break;
        }
    }


}