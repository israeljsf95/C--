#include<iostream>
using namespace std;

//bitwise operators:
// &  and
// |  or
// ^  x-or
// ~  not
// << deslocamento a esquerda 
// >> deslocamento a direita


int main(){

    int x = 11, y = 5;
    cout << (x & y) << endl; // deve dar 1
    cout << (x | y) << endl; // deve dar 15
    cout << (x ^ y) << endl; // deve dar 14
    return 0;
}

