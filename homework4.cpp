#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	float number;
	cout << "������� ����� c ��������� ������: ";
	cin >> number;
	double resultdouble = static_cast<double>(number);
	cout << "��� double: " << resultdouble << endl;
	cout << typeid(resultdouble).name() << endl;
	int resultInt = static_cast<int>(number);
	cout << "��� int: " << resultInt << endl;
	cout << typeid(resultInt).name() << endl; 
	bool resultBool = static_cast<bool>(number);
	//�������� �������� if-else ������, ��� ��� ������� ������ ������ True/False ����� 1/0
	if (resultBool == 1) {
		cout << "����� �� ����� 0? true" << endl;
	} else {
		cout << "����� �� ����� 0? false" << endl;
	}
	cout << typeid(resultBool).name() << endl;
	return 0;
}