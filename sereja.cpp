#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cards[1000]; // Assuming the maximum number of cards is 1000
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    int sereja_points = 0;
    int dima_points = 0;
    bool sereja_turn = true;

    int left = 0;
    int right = n - 1;

    while (left <= right) {
        if (cards[left] > cards[right]) {
            if (sereja_turn) {
                sereja_points += cards[left];
            } else {
                dima_points += cards[left];
            }
            left++;
        } else {
            if (sereja_turn) {
                sereja_points += cards[right];
            } else {
                dima_points += cards[right];
            }
            right--;
        }
        sereja_turn = !sereja_turn; // switch turns
    }

    cout << sereja_points << " " << dima_points << endl;

    return 0;
}
