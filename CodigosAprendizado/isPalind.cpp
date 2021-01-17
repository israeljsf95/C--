#include <iostream>
using namespace std;

//There is a function that computes the same in the main, this improves readibility and makes the main functino less complex
int isPalin(int n){
    int reversed = 0;
    int auxFac1 = n; 
    int nDecomp = 1;
    int k = 0;
    while(1){
        int auxFac2 = auxFac1 % 10;
        k++;
        auxFac1 = auxFac1 / 10;
        nDecomp++;
        if (auxFac1 == 0){
            break;
        }  
    }
    auxFac1 = n;
    while(1){
        int auxFac2 = auxFac1 % 10;
        int tenFac = 1;
        for(int i = k-1; i >=1 ; i--){
            tenFac *= 10;
        }
        reversed += tenFac*auxFac2;
        auxFac1 = auxFac1 / 10;
        k--;
        if (auxFac1 == 0){
            break;
        }  
    }
    if (reversed == n){
        return 1;
    }else{
        return -1;
    }
}

int main(){
    int number;
    int reversed = 0;
    cout << "Enter with the number that will be analised: " << endl;
    cin >> number;
    int auxFac1 = number; 
    int nDecomp = 1;
    int k = 0;
    while(1){
        int auxFac2 = auxFac1 % 10;
        k++;
        auxFac1 = auxFac1 / 10;
        cout << nDecomp << ":" << auxFac2 << endl;
        nDecomp++;
        if (auxFac1 == 0){
            break;
        }  
    }
    auxFac1 = number;
    while(1){
        int auxFac2 = auxFac1 % 10;
        int tenFac = 1;
        for(int i = k-1; i >=1 ; i--){
            tenFac *= 10;
        }
        cout << tenFac << endl;
        reversed += tenFac*auxFac2;
        auxFac1 = auxFac1 / 10;
        k--;
        if (auxFac1 == 0){
            break;
        }  
    }
    cout << reversed<< endl;
    if (reversed == number){
        cout << number << " is Palindrome" << endl;
    }else{
        cout << number << " is not Palindrome" << endl;
    }
    
    cout << "------------------" << endl;
    cout << "Function Output: " << endl;
    int palin = isPalin(number);
    if (palin == 1)
    {
        cout << number << " is Palindrome" << endl;
    }else{
        cout << number << " is not Palindrome" << endl;
    }
    
    return 0;
}