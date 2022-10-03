#include <bits/stdc++.h>
using namespace std;

// printing vector
void printVectorInOneWay(vector <int> v) {
    cout << "this is from one-way: \n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

void printVectorInAnotherWay(vector <int> v) {
    /*
    without general indexing;
    'auto' works like for_each loop
    here, it's taking reference of vector, v
    */

    cout << "this is from another-way: \n";
    for (auto &a : v) {
        cout << a << " ";
    }
}


void printVectorInAnotherWay_2(vector <int> v){
    cout << "this is from another-way (2): \n";
    for(auto i = v.begin(); i != v.end(); i++){
        cout << *i << " ";
    }
}

void printVectorInAnotherWay_3(vector <int> v){
    cout << "this is from another-way (3): \n";

    auto i = v.begin();
    auto j = v.end();

    while(i != j){
        cout << *i << " ";   // add pointer
        i++;
    }
}

void printVectorInAnotherWay_4(vector <int> v){
    cout << "this is from another-way (4): \n";

    for(int i=0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
}


int main() {
    vector<int> v;

    // insert manually
    v.push_back(12);
    v.push_back(11);
    v.push_back(10);

    // push N times (scans from user)
    cout << "enter the number of item(s) you wanna push: ";
    int N; cin >> N;

    cout << "enter the item(s) you wanna push: ";
    for (int i = 0; i < N; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }


    // one way
    printVectorInOneWay(v); cout << "\n";

    // another way
    printVectorInAnotherWay(v); cout << "\n";

    // another way (2)
    printVectorInAnotherWay_2(v); cout << "\n";

    // another way (3)
    printVectorInAnotherWay_3(v); cout << "\n";

    // another way (4)
    printVectorInAnotherWay_4(v); cout << "\n";

    return 0;
}
