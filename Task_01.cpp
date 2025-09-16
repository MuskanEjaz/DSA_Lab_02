#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(const int arr[], int n, int key) {
    vector<int> indices;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

void printIndices(const vector<int>& indices) {
    if (indices.empty()) {
        cout << "No occurrences found.";
    } else {
        for (int idx : indices) {
            cout << idx << " ";
        }
    }
    cout << endl;
}

int main() {
    // Multiple occurrences
    int arr1[] = {1, 2, 3, 2, 4, 2, 5};
    vector<int> result1 = findIndices(arr1, 7, 2);
    cout << "Test case 1 (Multiple occurrences): ";
    printIndices(result1);   

     // Key not present
    int arr2[] = {10, 20, 30, 40};
    vector<int> result2 = findIndices(arr2, 4, 25);
    cout << "Test case 2 (Key not present): ";
    printIndices(result2);   

    // Empty array
    int arr3[] = {};
    vector<int> result3 = findIndices(arr3, 0, 5);
    cout << "Test case 3 (Empty array): ";
    printIndices(result3);   
    return 0;
}

