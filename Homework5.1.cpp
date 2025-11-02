#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int numberOne,numberTwo;
	cout << "Ââåäèòå ïåðâîå ÷èñëî: ";
	cin >> numberOne;
	cout << "Ââåäèòå âòîðîå ÷èñëî: ";
	cin >> numberTwo;
	numberOne = numberOne ^ numberTwo;
	numberTwo = numberOne ^ numberTwo;
	numberOne = numberOne ^ numberTwo;
	cout << "Ïîñëå îáìåíà: " << "\n" << "Ïåðâîå ÷èñëî: " << numberOne << "\n" << "Âòîðîå ÷èñëî: " << numberTwo;
	return 0;
}
