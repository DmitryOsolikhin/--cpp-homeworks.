#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int number;
	cout << "������� ����� N: ";
	cin >> number;
	cout << "����� �� 1 �� " << number << ":" << endl;
	for (int i = 1; i <= number; i++) {
		cout << i << " ";
	}
}