#include <iostream>
using namespace std;

float a,t; 

void input(){
    cout << "Masukkan alas: ";
    cin >> a;
    cout << "Masukkan tinggi: ";
    cin >> t;
}

float luasSegitiga(float x, float y){
    return (x*y)/2;
}

void output(){
    cout << "Luas segitiga: " << luasSegitiga(a,t) << endl;
}

int main() {
    input();
    output();
}