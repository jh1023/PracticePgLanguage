#include <iostream>
using namespace std;

int main() {
	int N;
	int end_of_hex = 1, cnt = 6;
	int result = 1;
	cin >> N;

	while (1) {
		if (end_of_hex >= N) {
			cout << result << endl;
			return 0;
		}
		end_of_hex += cnt;
		cnt += 6;
		result++;
	}
}