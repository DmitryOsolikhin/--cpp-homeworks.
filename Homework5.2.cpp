#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int number;
	cout << "Введите число: ";
	cin >> number;
	if (number > 0) {
		cout << "Число положительное";
	}
	else {
		if (number == 0) {
			cout << "Число равно нулю";
		}
		else {
			cout << "Число отрицательное";
		}
	}
}