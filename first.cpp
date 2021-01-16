/*
Primeiro programa em C++
*/


#include <iostream>
using namespace std;

int main(){
    std::cout << "Hello World\n";
    cout << "Hello World\n";

    int a, b, c;
    cout << "Entre com dois numeros!!!\nNumero 1: ";
    cin >> a;
    cout << "Numero 2: " << endl; 
    cin >> b;
    c = a + b;
    cout << "A soma e " << c << endl;
    return 0;
}