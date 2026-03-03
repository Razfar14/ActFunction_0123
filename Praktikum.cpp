#include <iostream>
using namespace std;

//Deklarasi variabel global
    float p, l;

//Implementasi prosedur&funngsi
void input(){
    cout << "Masukkan panjang: ";
    cin >> p;
    cout << "Masukkan tinggi: ";
    cin >> l;
}

float luasPersegi(){
    return p*l;
}

void output(){
    cout << "Luas persegi: " << luasPersegi() << endl;
}

//Program utama
int main() {
    //start
    input();
    output();
    //end
}