#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto isHard = bool{ false };
	while (0 < (n--)) {
		int x;
		cin >> x;

		if (1 == x) {
			isHard = true;
			break;
		}
	}

	cout << (isHard ? "HARD" : "EASY");

	return 0;
}