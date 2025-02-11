#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;
    int max_roll = max(Y, W);
    int favorable_outcomes = 6 - max_roll + 1;
    int gcd = __gcd(favorable_outcomes, 6);
    cout << favorable_outcomes / gcd << '/' << 6 / gcd;
    return 0;
}
