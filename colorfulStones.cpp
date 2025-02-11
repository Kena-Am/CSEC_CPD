#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int position = 0;
    for (char c : t) {
        if (s[position] == c) {
            position++;
        }
    }
    cout << position + 1;
    return 0;
}
