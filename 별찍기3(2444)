#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
	int number;
	cin >> number;
	int star = number;
	for (int i = 1; i <= (2 * number - 1) / 2 + 1; i++) {
		for (int p = 0; p < abs(number - i); p++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i - 1; k++) {
			cout << "*";
		}
		cout << '\n';
	}

	for (int i = 1; i < number; i++) {

		for (int p = 0; p <i; p++) {
			cout << " ";
	}
		for (int k = 2 * number - (2 * i + 1); k > 0; k--) {
			cout << "*";
		}
		cout << '\n';
	}



	return 0;
}
