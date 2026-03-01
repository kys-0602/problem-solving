#include <iostream>

int main(int argc, char* argv[]) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	// N
	int N; std::cin >> N;

	int max = -1'000'001;
	int min =  1'000'001;

	//int* arr = new int[N];
	for (int i = 0, x = 0; i < N; ++i) {
		std::cin >> x;

		if (x > max) {
			max = x;
		} 
		
		if (x < min) {
			min = x;
		}
	}

	//delete[] arr;
	//arr = nullptr;

	std::cout << min << " " << max << "\n";

	return 0;
}
