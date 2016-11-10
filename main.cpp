#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

void reverseString(string &s) {
    int n = s.length();
    int left = 0;
    int right = n-1;
    while (left < right) {
        s[right] = s[right]+s[left];
        s[left] = s[right]-s[left];
        s[right] = s[right]-s[left];
        left++;
        right--;
    }
}

int main() {
    string s1;
    cin >> s1;
    reverseString(s1);
    cout << s1;
    return 0;
}