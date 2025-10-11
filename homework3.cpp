#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int length, width, perimetr, square;
	cout << "Введите длинну: ";
	cin >> length;
	cout << "Введите ширину: ";
	cin >> width;
	perimetr = length * 2 + width * 2;
	square = length * width;
	cout << "Периметр: " << perimetr << endl;
	cout << "Площадь: " << square << endl;
	return 0;
}