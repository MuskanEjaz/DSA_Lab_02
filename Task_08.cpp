#include <iostream>
#include <string>
using namespace std;

int findSubstring(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    if(m == 0) return -1;   // empty pattern case
    if(m > n) return -1;

    for(int i = 0; i <= n - m; i++) {
        int j;
        for(j = 0; j < m; j++) {
            if(text[i + j] != pattern[j]) break;
        }
        if(j == m) return i;
    }
    return -1;
}

int main() {
    // Pattern at the beginning
    string t1 = "hello world";
    string p1 = "hello";
    cout << "Case 1: " << findSubstring(t1, p1) << endl; // Expected 0

    // Pattern at the end
    string t2 = "openai chatbot";
    string p2 = "chatbot";
    cout << "Case 2: " << findSubstring(t2, p2) << endl; // Expected 7

    // Pattern not present
    string t3 = "abcdefg";
    string p3 = "xyz";
    cout << "Case 3: " << findSubstring(t3, p3) << endl; // Expected -1

    // Empty pattern
    string t4 = "sample text";
    string p4 = "";
    cout << "Case 4: " << findSubstring(t4, p4) << endl; // Expected -1

    return 0;
}

