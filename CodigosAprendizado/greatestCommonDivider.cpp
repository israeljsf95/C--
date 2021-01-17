#include <iostream>
using namespace std;


int main(){
    cout << "Greatest Common Dividor of 2 Integers" << endl;
    cout << "---------------------" << endl;
    cout << "Enter the first number " << endl;
    int q1, q2;
    int aux1, aux2;
    cin >> q1;
    cout << "Enter the Second number " << endl;
    cin >> q2;
    aux1 = q1;
    aux2 = q2;
    while (q1 != q2){
        if (q1 > q2){
            q1 = q1 - q2;   
        }else{
            q2 = q2 - q1;
        }
    }
    cout << "GCD is " << q1 << endl;
    cout << "LCM is " << (aux1*aux2)/q1 << endl;
    return 0;
}