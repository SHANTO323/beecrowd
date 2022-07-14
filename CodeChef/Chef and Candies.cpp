#include<iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N, K, K2 = 0, sum = 0;

		cin >> N >> K;

		if (N < K || N == K)cout << "0" << endl;

		else {
			while (true) {
				sum = K / N;
				if (sum > 0) break;

				K += 4;
				K2++;
			}
			cout << K2 << endl;
		}
	}
	return 0;
}