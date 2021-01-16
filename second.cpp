/*
Todos os tamanhos serão mostrados em bytes
*/

#include <iostream>
#include <climits> 
using namespace std;


//string é diferente de char

int main(){
    
    int a;
    cout << "Tamanho de um inteiro " << sizeof(a) << endl;
    long int b;
    cout << "Tamanho de um long inteiro " << sizeof(b) << endl;
    char c; // char em ' ' -- string " "
    cout << "Tamanho de um char " << sizeof(c) << endl;
    float d; // Para definir um float precisamente é necessario adicionar  o f ao final do numero: 25.4f porque é double por default
    cout << "Tamanho de um float " << sizeof(d) << endl;
    double e;
    cout << "Tamanho de um double " << sizeof(e) << endl;

    cout << "Int min para minha maquina " << INT_MIN << endl; 
    cout << "Int max para minha maquina " << INT_MAX << endl; 
    return 0;
}