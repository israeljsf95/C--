

#include <iostream>
using namespace std;


int main(){
    int i; // For not rise a n error i is needed to be declared before the loop statement
    for ( i = 1; i <=10; i++){
        cout << i;
    }
    cout << i;//scope error, perfect
    return 0;
}