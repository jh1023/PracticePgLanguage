#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll N; cin >> N;
	cout << (N * (N - 1) * (N - 2)) / 6 << '\n' << 3;
}
