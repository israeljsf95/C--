#include <iostream>
using namespace std;


int main(){
    
    int a, b, c;

    cout << "Enter with three numbers: " << endl;
    cin >> a >> b >> c;

    if (a > b && a > c){
        cout << "The number " << a << " is the greatest number." << endl;
    }else if (b > c)
    {
        cout << "The number " << b << " is the greatest number." << endl;
    }else{
        cout << "The number " << c << " is the greatest number." << endl;
    }
    
    
    return 0;
}