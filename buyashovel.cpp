#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    for (int i = 1; ; ++i) {
        if ((i * k) % 10 == 0 || (i * k) % 10 == r) {
            cout << i;
            break;
        }
    }
    return 0;
}
