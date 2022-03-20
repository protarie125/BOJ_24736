#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t, f, s, p, c;
	cin >> t >> f >> s >> p >> c;

	cout << 6 * t + 3 * f + 2 * s + p + 2 * c << ' ';
	cin >> t >> f >> s >> p >> c;
	cout << 6 * t + 3 * f + 2 * s + p + 2 * c;

	return 0;
}