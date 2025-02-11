#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n, h, x, total;

    cout << "Enter the number of friends: ";
    cin >> n;

    cout << "Enter the height of the fence: ";
    cin >> h;

    int heights[n];

    cout << "Enter the heights of the friends: ";
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    for (int i = 0; i < n; i++) {
        if (heights[i] <= h) {
            sum += 1;
        } else {
            sum += 2;
        }
    }

    cout << sum;

    return 0;
}
