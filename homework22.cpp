#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int firstNumber, secondNumber, sum, difference, product;
	cout << "������� ������ �����: ";
	cin >> firstNumber;
	cout << "������� ������ �����: ";
	cin >> secondNumber;
	sum = firstNumber + secondNumber;
	difference = firstNumber - secondNumber;
	product = firstNumber * secondNumber;
	cout << "C����: " << sum << endl;
	cout << "��������: " << difference << endl;
	cout << "������������: " << product << endl;
	return 0;
}