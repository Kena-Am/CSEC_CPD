#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    int home[30], guest[30];
    for (int i = 0; i < n; ++i) cin >> home[i] >> guest[i];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j && home[i] == guest[j])
                count++;
    cout << count;
    return 0;
}
