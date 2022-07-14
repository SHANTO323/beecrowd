#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int N2;
		cin >> N2;
		cout << N2 % 10 << endl;
	}
	return 0;
}