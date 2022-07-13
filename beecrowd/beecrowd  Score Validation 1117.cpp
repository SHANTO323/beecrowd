#include <iostream>

using namespace std;

int main() {
	float N, N2 = 0, sum = 0;
	while (true) {
		if (N2 == 2)break;
		else { cin >> N; }

		if (N > 0.00 && N <= 10.00) {
			N2++;
			sum += N;
		}
		else { cout << "nota invalida" << endl; }
	}
	cout << "media = " << sum / 2 << endl;
	return 0;
}
