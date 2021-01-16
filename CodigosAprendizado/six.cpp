#include <iostream>
using namespace std;


//Enum define um grupo de constantes
//#define é usado para definir uma constante por vez
enum day {mon = 3, tue = 1, wed, thu, fri, sat, sun}; //Isso tudo são constantes, não podem ser modificadas

//#define mon 0

int main(){
    day d;
    d = mon;
    cout << d << endl;
    d = tue;
    cout << d << endl;
    d = wed;
    cout << d << endl;
    return 0;
}