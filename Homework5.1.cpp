#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int numberOne,numberTwo;
	cout << "������� ������ �����: ";
	cin >> numberOne;
	cout << "������� ������ �����: ";
	cin >> numberTwo;
	numberOne = numberOne ^ numberTwo;
	numberTwo = numberOne ^ numberTwo;
	numberOne = numberOne ^ numberTwo;
	cout << "����� ������: " << "\n" << "������ �����: " << numberOne << "\n" << "������ �����: " << numberTwo;
}