#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int  N2 = 0, N3 = 0;
		cout << i << " " << i * i << " " << i * i * i << endl;
		N2 = i * i;
		N3 = i * N2 + 1;
		cout << i << " " << N2 + 1 << " " << N3 << endl;
	}

	return 0;
}