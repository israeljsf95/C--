#include <iostream>
using namespace std;


int main(){

    int n = 5;
    int A[n] = {1,2,3,4,5};
    int B[n] = {1,2};
    int C[] = {1,2,3,4,5};
    int D[n] = {1};
    for (int i = 0; i < n; i++){
        cout << "A[" << i << "] = " << A[i] << "  ";
        
        cout << "B[" << i << "] = " << B[i] << "  ";
        
        cout << "C[" << i << "] = " << C[i] << "  ";
        
        cout << "D[" << i << "] = " << D[i] << "  ";

        cout << endl;
    }

    cout << endl;
    int i = 0; 
    for (int x: A){
        cout << "A[" << i << "] = " << x << "  ";
        i++; 
    }
    
    cout << endl;
    i = 0;
    //Here the compiler will convert the char to ASCII number
    char E[] = {'A', 66, 'C', 68};
    for (int x: E){
        cout << "E[" << i << "] = " << x << "  ";
        i++;
    }

    //Here the compiler will read avery number as a char converting by using the ASCII
    cout << endl;
    i = 0;
    for (char x: E){
        cout << "E[" << i << "] = " << x << "  ";
        i++;
    }
    
    //Here the compiler will interpret by his own the data type of x
    cout << endl;
    i = 0;
    for (auto x: E){
        cout << "E[" << i << "] = " << x << "  ";
        i++;
    }


    return 0;
}