#include <iostream>
using namespace std;

//Deklarasi variabel global
float p,l;

//Implementasi prosedur&funngsi
void input(){
    cout << "Masukkan panjang: ";
    cin >> p;
    cout << "Masukkan lebar: ";
    cin >> l;
}

float luasPersegi(float x, float y){
    return x*y;
}
int jumlah(int a, int b, int c){
    return a+b+c;
}

void output(){
    cout << "Luas persegi: " << luasPersegi(p,l) << endl;
 }

 //Program utama
int main() {
    //start
    input();
    output();
    cout << "Jumlah: " << jumlah(5,6,9) << endl;
    //end
}