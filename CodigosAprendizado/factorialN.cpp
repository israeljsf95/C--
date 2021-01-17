#include <iostream>
using namespace std;



int main(){
    int number;
    cout << "Enter with the number to compute his factorial" << endl;
    cin >> number;
    int fact = 1;

    for (int i = 1; i <= number; i++){
        fact = fact*i;
    }
    cout << "The factorial is: " << fact << endl;
    return 0;
}