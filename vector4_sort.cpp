// C++ program to sort a vector in non-decreasing
// order.
#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> v){
    for (auto x : v){
        cout << x << " ";
	}

	cout << "\n";
}


int main() {
    /*
    note: sort() is an one-dimensional function
    1D array, vector are one-dimensional data structure
    */

	vector<int> v {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
	cout << "unsorted order: \n";
	printVector(v);

//  Ascending order:
	// begin() -> first element of the vector
	// end() -> last element of the vector

	cout << "sorted in ascending order: \n";
	sort(v.begin(), v.end());
	printVector(v);


//  Descending order:
	// rbegin() -> moves from last to first element (reverse beginning)
	// rend() -> moves from first to last element (reverse ending)

	cout << "sorted in ascending order: \n";
    sort(v.rbegin(), v.rend());
    printVector(v);

	return 0;
}
