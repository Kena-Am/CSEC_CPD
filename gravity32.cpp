#include <iostream>
#include <vector>
#include <algorithm>
 
void gravity_flip(int n, std::vector<int>& cubes) {
    std::sort(cubes.begin(), cubes.end());
}
 
int main() {
    int n;
    std::cin >> n;
 
    std::vector<int> cubes(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> cubes[i];
    }
 
    gravity_flip(n, cubes);
 
    for(int i = 0; i < n; ++i) {
        std::cout << cubes[i] << " ";
    }
    std::cout << std::endl;
 
    return 0;
}
