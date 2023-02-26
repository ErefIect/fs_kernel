#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> failure_function(string pattern) {
    int m = pattern.length();
    vector<int> f(m, 0);
    int k = 0;
    for (int j = 1; j < m; j++) {
        while (k > 0 && pattern[j] != pattern[k]) {
            k = f[k-1];
        }
        if (pattern[j] == pattern[k]) {
            k++;
        }
        f[j] = k;
    }
    return f;
}

void kmp_search(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    vector<int> f = failure_function(pattern);
    int i = 0, j = 0;
    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
            if (j == m) {
                cout << "Pattern found at position " << i-j << endl;
                j = f[j-1];
            }
        } else if (j > 0) {
            j = f[j-1];
        } else {
            i++;
        }
    }
}

int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";
    kmp_search(text, pattern);
    return 0;
}
