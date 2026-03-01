#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    // Arr
    std::vector<int> Arr(3, 0);
    for (int i = 0; i < Arr.size(); ++i) std::cin >> Arr[i];

    std::sort(Arr.rbegin(), Arr.rend());

    std::cout << Arr[1];
    
    return 0;
}
