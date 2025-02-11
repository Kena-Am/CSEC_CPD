#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int upper_count = 0, lower_count = 0;
    
    // Count the uppercase and lowercase letters
    for (char c : s) {
        if (isupper(c)) {
            upper_count++;
        } else {
            lower_count++;
        }
    }
    
    // Convert based on the count comparison
    if (upper_count > lower_count) {
        // Convert to uppercase
        for (char &c : s) {
            c = toupper(c);
        }
    } else {
        // Convert to lowercase
        for (char &c : s) {
            c = tolower(c);
        }
    }
    
    // Output the result
    cout << s << endl;
    return 0;
}
