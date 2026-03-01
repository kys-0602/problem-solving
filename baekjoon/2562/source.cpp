#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::cin.tie(nullptr);
    std::cout.sync_with_stdio(false);
        
    int num = 0;
    int max = 0;
    int idx = 0;
    for (auto i = 0; i < 9; ++i) {
        std::cin >> num;

        if (num > max) {
            max = num;
            idx = i;
        }
    }

    std::cout << max << "\n";
    std::cout << idx + 1 << "\n";
    
    return 0;
}
