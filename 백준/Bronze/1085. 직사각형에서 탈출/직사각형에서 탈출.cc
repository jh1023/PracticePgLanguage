#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	int result;
	cin >> x >> y >> w >> h;

	result = x;
	if (w - x < result)
		result = w - x;
	if (y < result)
		result = y;
	if (h - y < result)
		result = h - y;

	cout << result << '\n';
}