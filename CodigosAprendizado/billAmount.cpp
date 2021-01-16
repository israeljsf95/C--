#include <iostream>
using namespace std;



int main(){
    float billAmount, discount;

    cout << "Enter with the bill amount: " << endl;
    cin >> billAmount;
    if (billAmount < 100)
    {
        discount = billAmount - 0.0*billAmount;
        cout << "Discount of 0'%' applied, final amount is: " << discount << endl;
    }
    else if (billAmount >= 100 && billAmount < 500)
    {
        
        discount = billAmount - 0.1*billAmount;
        cout << "Discount of 10'%' applied, final amount is: " << discount << endl;
    }
    else
    {
        discount = billAmount - 0.2*billAmount;
        cout << "Discount of 20'%' applied, final amount is: " << discount << endl;
    }
    
    return 0;

}