#include <iostream>
using namespace std;

//Is not possible to search using bynaary search because the array is not ordered!!!

int main(){
    int A[] = {20, 10, 30, 2, 1};
    int key = 2;
    int ind = 0;
    cout << "Displaying the Array for search" << endl;
    cout << '[';
    for (auto x: A){
        cout << x << " ";
    }
    cout << ']' << endl;

    cout << "Beggining the Search of " << key << " at the Array" << endl;
    cout << "--------------------------" << endl;

    for (auto x: A){
        if (x == key)
        {
            cout << "Found number " << key << " in the position " << ind << " of A." << endl;
            return 0;
        }
        ind++;
        
    }
    return 0;
}