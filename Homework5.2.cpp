#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int number;
	cout << "������� �����: ";
	cin >> number;
	if (number > 0) {
		cout << "����� �������������";
	}
	else {
		if (number == 0) {
			cout << "����� ����� ����";
		}
		else {
			cout << "����� �������������";
		}
	}
}