#include <iostream>
using namespace std;


int main(){
    int number;
    cout << "Enter with the number that will be decomposed: " << endl;
    cin >> number;
    int auxFac1 = number; 
    int nDecomp = 1;
    int sum = 0;
    while(1){
        int auxFac2 = auxFac1 % 10;
        sum += auxFac2;
        auxFac1 = auxFac1 / 10;
        cout << nDecomp << ":" << auxFac2 << endl;
        nDecomp++;
        if (auxFac1 == 0){
            break;
        }  
    }
    cout << "The sum of digits of " << number << " is " << sum << "." << endl;
    return 0;
}