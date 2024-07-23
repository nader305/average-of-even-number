#include<iostream>
using namespace std;
int evenAvg(int n) {
	int sum = 0, c = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			sum += i;
			c++;
		}
	}
	return sum / c;
}
int main() {
	int range;
	cout << "Enter range:\n";
	cin >> range;
	cout << "=============\n";
	int average = evenAvg(range);
	cout << "average of even is :" << average << endl;
	return 0;
}