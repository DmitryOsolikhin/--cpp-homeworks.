#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int firstNumber, secondNumber, sum, difference, product;
	cout << "Введите первое число: ";
	cin >> firstNumber;
	cout << "Введите второе число: ";
	cin >> secondNumber;
	sum = firstNumber + secondNumber;
	difference = firstNumber - secondNumber;
	product = firstNumber * secondNumber;
	cout << "Cумма: " << sum << endl;
	cout << "Разность: " << difference << endl;
	cout << "Произведение: " << product << endl;
	return 0;
}