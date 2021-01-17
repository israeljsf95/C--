#include <iostream>
using namespace std;


int main(){
    int number;

    cout << "Enter with the number: " << endl;
    cin >> number;
    int sum = 0;
    for (int i = 1; i <= number; i++){
        sum += i;
    }
    cout << "The of the first " << number << " integer numbers is: " << sum << endl;
    return 0;
}