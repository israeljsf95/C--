#include <iostream>
using namespace std;


int main(){

    int A[] = {20, 10, 30, 2, 1};
    cout << "Displaying the Array for search the max and min inside of it" << endl;
    cout << '[';
    for (auto x: A){
        cout << x << " ";
    }
    cout << ']' << endl;
    int max = -4000000;
    int min =  4000000;
    int posMaxA = 0;
    int posMinA = 0;

    for (int i = 0; i < 5; i++){

        if (A[i] > max){
            max = A[i];
            posMaxA = i;
        }

        if (A[i] < min){
            min = A[i];
            posMinA = i;
        }
    }
    cout << "The max of A is " << max << " in the position " << posMaxA << endl;

    cout << "The min of A is " << min << " in the position " << posMinA << endl; 

}