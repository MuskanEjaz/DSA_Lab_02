#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

void printVector(const vector<int>& vec) {
    if (vec.empty()) {
        cout << "No occurrences found." << endl;
    } else {
        cout << "Indices: ";
        for (int index : vec) {
            cout << index << " ";
        }
        cout << endl;
    }
}

int main() {

    vector<int> arr1 = {1, 2, 3, 2, 4, 2, 5};
    int key1 = 2;
    cout << "Test Case 1: Multiple occurrences\n";
    printVector(findAllIndices(arr1, key1));

    vector<int> arr2 = {10, 20, 30, 40};
    int key2 = 25;
    cout << "\nTest Case 2: Key not present\n";
    printVector(findAllIndices(arr2, key2));

    vector<int> arr3 = {};
    int key3 = 5;
    cout << "\nTest Case 3: Empty array\n";
    printVector(findAllIndices(arr3, key3));

    return 0;
}
