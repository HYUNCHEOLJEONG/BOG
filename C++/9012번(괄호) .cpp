#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;
void solution(string&v) {
	stack<char>stacks;
	unordered_map<char, char>maps = {
		{')','('},
		{'}','{'},
		{']','['}
	};
	for (char c : v) {
		if (maps.count(c)) {
			if (!stacks.empty()&&stacks.top() == maps[c]) {
				stacks.pop();
			}
			else {
				cout << "NO" << endl;
				return;
			}

		}
		else {
			stacks.push(c);
		}
	}
	if (!stacks.empty()) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES"<<endl;
	}
}

int main() {
	int number;
	cin >> number;
	for (int i = 0; i < number; i++) {
		string temp;
		cin >> temp;
		solution(temp);
	}




	return 0;
}