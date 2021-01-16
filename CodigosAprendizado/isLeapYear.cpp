#include <iostream>

using namespace std;


int main(){
    int year; 
    cout << "Enter with the year value: " << endl;
    cin >> year;
    if (int rest1 = year%4 == 0){
        if (int rest2 = year%100 != 0){
            cout << "The year " << year << " is leap." << endl;
        }else{
            cout << "The year " << year << " is not a leap year" << endl;
        }
    }
    return 0;
}