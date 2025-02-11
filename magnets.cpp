#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of magnets
    string previous, current;
    cin >> previous; // Read the first magnet
    int groups = 1; // The first magnet always starts a new group

    for (int i = 1; i < n; i++) {
        cin >> current; // Read the next magnet
        if (current != previous) { // If the current magnet is different from the previous
            groups++; // It starts a new group
        }
        previous = current; // Update the previous magnet to the current one
    }

    cout << groups << endl; // Output the number of groups
    return 0;
}
