#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter with the number to compute the factors: " << endl;
    cin >> n;
    int primeCounter = 0;

    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            primeCounter++;
            cout << i << " is a factor of " << n << "." << endl;
        }else{
            cout << i << " is not a factor of " << n << "." << endl;
        }
    }
    cout << "-------------" << endl;
    if (primeCounter == 2){
        cout << n << " is prime." << endl;
    }else
    {
        cout << n << " is not prime." << endl;
    }
    
    return 0;

}



