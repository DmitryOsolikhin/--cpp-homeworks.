#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int numberOne,numberTwo;
	cout << "Введите первое число: ";
	cin >> numberOne;
	cout << "Введите второе число: ";
	cin >> numberTwo;
	numberOne = numberOne ^ numberTwo;
	numberTwo = numberOne ^ numberTwo;
	numberOne = numberOne ^ numberTwo;
	cout << "После обмена: " << "\n" << "Первое число: " << numberOne << "\n" << "Второе число: " << numberTwo;
}