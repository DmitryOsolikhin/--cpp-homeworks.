#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int number;
	cout << "¬ведите число N: ";
	cin >> number;
	cout << "„исла от 1 до " << number << ":" << endl;
	for (int i = 1; i <= number; i++) {
		cout << i << " ";
	}
}