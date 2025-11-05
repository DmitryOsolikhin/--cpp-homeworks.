#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int numberXOriginal;
	int reversedX = 0;
	int minX = -1000000, maxX = 1000000;
	cout << "Введите число x в пределах от -10^6 до 10^6: ";
	cin >> numberXOriginal;
	while (numberXOriginal < minX || numberXOriginal > maxX) {
		if (cin.fail()) {
			cin.clear();
		}
		cout << "Значение не удовлетворяет ограничениям. Введите число занаво: ";
		cin >> numberXOriginal;
	}
	cout << "Ввод: x = " << numberXOriginal << endl;
	int numberXcopy = numberXOriginal;
	while (numberXcopy > 0) {
		reversedX = reversedX * 10 + numberXcopy % 10;
		numberXcopy /= 10;
	}
	if (numberXOriginal == reversedX) {
		cout << "Вывод: true ";
	} else {
		cout << "Вывод: false ";
	}
	return 0;
}