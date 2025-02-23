#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int matrix[5][5];
    int oneRow, oneCol;
    
    // Reading the matrix
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                oneRow = i;
                oneCol = j;
            }
        }
    }
    
    // Calculating Manhattan distance to the center (2, 2)
    int moves = abs(oneRow - 2) + abs(oneCol - 2);
    
    cout << moves << endl;
    return 0;
}
