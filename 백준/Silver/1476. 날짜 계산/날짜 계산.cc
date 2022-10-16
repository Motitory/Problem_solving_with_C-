#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int e, s, m;
	cin >> e >> s >> m;

	e -= 1;
	s -= 1;
	m -= 1;

	for (int i = 0; ; i++) {
		if (i % 15 == e && i % 28 == s && i % 19 == m) {
			cout << i + 1 << '\n';
			break;
		}
	}

	return 0;
}