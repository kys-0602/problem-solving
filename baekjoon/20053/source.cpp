#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    // T
    int T; std::cin >> T;
    
    while (T --> 0) {
        // N
        int N; std::cin >> N;
        
        // Arr
        std::vector<int> Arr(N, 0);
        for (int i = 0; i < N; ++i) std::cin >> Arr[i];
        
        // min, max
        int min_val = *std::min_element(Arr.begin(), Arr.end());
        int max_val = *std::max_element(Arr.begin(), Arr.end());
        
        std::cout << min_val << ' ' << max_val << '\n';
    }
    
    return 0;
}
