#include<iostream>
#include<vector>
using namespace std;
int main() {
	int T,a,b;
	vector<int>results;
	cin >> T;
	results.resize(T);
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		results[i]=(a + b);
	}
	for(int num : results) {
		cout << num << endl;
	}
}