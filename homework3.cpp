#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int length, width, perimetr, square;
	cout << "������� ������: ";
	cin >> length;
	cout << "������� ������: ";
	cin >> width;
	perimetr = length * 2 + width * 2;
	square = length * width;
	cout << "��������: " << perimetr << endl;
	cout << "�������: " << square << endl;
	return 0;
}