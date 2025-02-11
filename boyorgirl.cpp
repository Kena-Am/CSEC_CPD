#include <iostream>
#include <set>
using namespace std;
 
int main() {
    string username;
    cin >> username;
 
    // Create a set to store distinct characters
    set<char> distinct_chars(username.begin(), username.end());
 
    // If the number of distinct characters is odd, print "IGNORE HIM!", else "CHAT WITH HER!"
    if (distinct_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
 
    return 0;
}
