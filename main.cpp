#include <iostream>

using namespace std;

//Print the input string in reverse

void printReverse(string input) {
    if (input.length() != 0) {
        cout << input[input.length()-1];
        printReverse(input.substr(0,input.length()-1));
    }
    return;
}

int main() {
    string input;
    cin >> input;
    printReverse(input);
    return 0;
}
