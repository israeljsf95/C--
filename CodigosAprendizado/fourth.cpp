#include<iostream>
#include<math.h>
using namespace std;


int main(){

    float r, area;
    cout << "Enter Radius: \n";
    cin >> r;
    area = 3.1425f*r*r;
    cout << "Area is " << area << endl;

    //Calculando as raizes de um polinomio de segunda ordem
    //Equacao de Bhaskara
    int a, b, c;
    float raiz1, raiz2;
    cout << "Entre com 3 valores \n";
    cin >> a >> b >> c;
    raiz1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    raiz2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    cout << "Raiz 1: " << raiz1 << endl;
    cout << "Raiz 2: " << raiz2 << endl;
    return 0;
}