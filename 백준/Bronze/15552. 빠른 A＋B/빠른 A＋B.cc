#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T, A, B;
	cin >> T;

	while (T--)	{
		cin >> A >> B;
		cout << A + B << '\n';
	}
	
	return 0;
}