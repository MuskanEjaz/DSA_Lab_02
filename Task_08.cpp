#include <iostream>
#include <string>
using namespace std;

int findSubstring(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    if(m == 0 || m > n) return -1;

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
    string t1 = "hello world";
    string p1 = "hello";
    cout << "Case 1: " << findSubstring(t1, p1) << endl; // 0

    string t2 = "openai chatbot";
    string p2 = "chatbot";
    cout << "Case 2: " << findSubstring(t2, p2) << endl; // 7

    string t3 = "abcdefg";
    string p3 = "xyz";
    cout << "Case 3: " << findSubstring(t3, p3) << endl; // -1

    return 0;
}
