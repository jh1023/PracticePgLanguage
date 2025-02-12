#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	int N, num;
	std::vector<int> v;

	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> num;
		v.push_back(num);
	}

	std::sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		std::cout << v[i] << "\n";
	}

	return 0;
}