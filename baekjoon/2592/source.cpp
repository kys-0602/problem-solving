#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // 합계 저장 변수
    int s = 0;

    // 배열 입력 받기
    std::vector<int> Arr(100, 0);
    for (int i = 0; i < 10; ++i) {
        int x; std::cin >> x;
        s += x;
        Arr[x / 10] += 1;
    }

    // 평균 출력
    std::cout << (s / 10) << '\n';

    // 최빈값 구하기
    int max_freq = 0;
    int max_mode = 0;
    for (int i = 1; i < 100; i += 1) {
        if (max_freq <= Arr[i]) {
            max_freq = Arr[i];
            max_mode = i * 10;
        }
    }

    std::cout << max_mode;

    return 0;
}
