#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;

    int total_rotations = 0;
    char current_position = 'a';

    for (char c : s) {
        int clockwise_distance = abs(c - current_position);
        int counterclockwise_distance = 26 - clockwise_distance;
        total_rotations += min(clockwise_distance, counterclockwise_distance);
        current_position = c;
    }

    cout << total_rotations << endl;

    return 0;
}
