#include <algorithm>
#include <array>
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::cout.sync_with_stdio(false);
    
    std::string str;
    std::cin >> str;
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c); });

    std::array<int, 26> arr;
    arr.fill(0);

    for (auto i = 0; i < str.length(); ++i) {
        arr[str[i] - 'a'] += 1;
    }

    int max = 0;
    char maxAlpha = ' ';
    for (auto i = 0; i < arr.size(); ++i) {
        if (max < arr[i]) {
            max = arr[i];
            maxAlpha = 'A' + i;
        } else if (max == arr[i]) {
            maxAlpha = '?';
        }
    }

    std::cout << maxAlpha;
    
    return 0;
}
