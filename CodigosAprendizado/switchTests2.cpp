#include <iostream>
using namespace std;



int main(){
    cout << "----------Calculator----------" << endl;
    cout << "Enter with one of these numbers to evaluate the operation: " << endl;
    cout << endl;
    cout << "1: to sum A + B";
    cout << endl;
    cout << "2: to sum A * B";
    cout << endl;
    cout << "3: to sum A ^ B";
    cout << endl;

    int a, b, choice;
    cout << "Enter with A and B: ";
    cin >> a >> b;
    cout << endl;
    cout << "Enter with the choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:{
            int sum = a + b;
            cout << "The sum of " << a << " + " << b << " is equals to: " << sum; 
            break;
        }
        case 2:{
            int prod = a * b;
            cout << "The prod of " << a << " * " << b << " is equals to: " << prod;
            break;
            }
        case 3:{
            int power = 1;
            for (int i = 1; i <= b; i++){
                power = power*a;
            }
            cout << "The power of " << a << " ^ " << b << " is equals to: " << power;
            break;
            }
        default:
            cout << "Is not a valid operation: BYE BYE!!!" << endl;
            break;
    }

    return 0;
}