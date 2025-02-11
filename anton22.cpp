#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
 
    int anton = 0, danik = 0;
 
    // Count the number of 'A' and 'D' in the string
    for (char c : s) {
        if (c == 'A') {
            anton++;
        } else if (c == 'D') {
            danik++;
        }
    }
 
    // Determine the result
    if (anton > danik) {
        cout << "Anton" << endl;
    } else if (danik > anton) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
 
    return 0;
}
