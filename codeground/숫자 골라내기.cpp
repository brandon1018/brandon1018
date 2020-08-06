#include <iostream>

using namespace std;

int Answer;

int main() {

	int T, test_case;

	cin >> T;

	for (test_case = 0; test_case < T; test_case++) {
		Answer = 0;

		int num, N;

		cin >> N;
		for (int i = 0;i < N;i++) {
			cin >> num;
			Answer = Answer ^ num;
		}

		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;
}