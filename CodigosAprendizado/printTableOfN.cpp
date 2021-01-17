#include <iostream>
using namespace std;



int main(){

    int number;
    cout << "Enter with the number to compute the multiplication table: " << endl;
    cin >> number;
    cout << "-----------------" << endl;
    for (int i = 1; i <=10; i++){
        cout << " " << number << " * " << i << " = " << number*i << endl;
    }
    return 0;
}