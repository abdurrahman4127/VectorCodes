#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> v){
    for(auto &a: v){
        cout << a << " ";
    }

    cout << "\n";
}

int main() {
    vector <int> v = {1, 2, 3};
    printVector(v);

//    manually inserting
    v.push_back(4);
    v.push_back(5);
    printVector(v);

//    using loop
    cout << "enter item(s) number to be pushed: \n";
    int N; cin >> N;  // take 4

    cout << "enter item(s) to be pushed: \n";
    for(int i=0; i<N; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    printVector(v);


//    insert first/last position: vector_name.insert(position, value)
    // v.insert(0, 0);  -> this is error
    cout << "inserting 0 at the beginning \n";
    v.insert(v.begin(), 0);  //to insert at last: v.insert(v.end(), 7);
    printVector(v);

//    insert at specific position
    cout << "insert at index number: ";
    int index; cin >> index;

    cout << "insert value: ";
    int val; cin >> val;

    cout << "inserting " << val << " at index number " << index <<"\n";
    v.insert(v.begin()+index, val);

    printVector(v);

//    copy a vector into another
    vector <int> v1 = {10, 11, 12};
    cout << "another vector v1: ";
    printVector(v1);

    cout << "copying v1 into v: \n";
    v.insert(v.end(),v1.begin(),v1.end());
    // v.insert(v.end(),v1.begin(),v1.begin()+3) would work too
    printVector(v);

    return 0;
}

