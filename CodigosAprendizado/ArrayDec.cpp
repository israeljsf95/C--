#include <iostream>
using namespace std;


int main(){

    int n = 5;
    int A[n] = {1,2,3,4,5};
    int B[n] = {1,2};
    int C[] = {1,2,3,4,5};
    for (int i = 0; i < n; i++){
        cout << "A[" << i << "] = " << A[i] << "  ";
        
        cout << "B[" << i << "] = " << B[i] << "  ";
        
        cout << "C[" << i << "] = " << C[i] << "  ";
        cout << endl;
    }
}