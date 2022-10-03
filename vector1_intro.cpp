#include <bits/stdc++.h>
using namespace std;

/* pass by reference so that any change inside this
   function may impact original vector
*/
void printVector(vector <int> &v) {   //&v -> reference
    int size = v.size();

    // printing vector
    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }

    v.push_back(7); // this change won't work unless referece is passed
}

int main() {
    // convention: vector <dataType> name;
    vector <int> v = {1, 2, 3};
    v.push_back(4);

    cout << "3rd element: " << v[3] << endl; // prints 3rd element (4)
    cout << "size: " << v.size() << endl;

    v.pop_back();
    cout << "size: " << v.size() << endl;
    cout << "last element: " << v[v.size() - 1] << endl;

    cout << "printing vector: \n";
    printVector(v); cout<<"\n";
    printVector(v); cout<<"\n";
    printVector(v); cout<<"\n";
    printVector(v); cout<<"\n";

    return 0;
}
