#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	float number;
	cout << "Введите число c плавающей точкой: ";
	cin >> number;
	double resultdouble = static_cast<double>(number);
	cout << "Как double: " << resultdouble << endl;
	cout << typeid(resultdouble).name() << endl;
	int resultInt = static_cast<int>(number);
	cout << "Как int: " << resultInt << endl;
	cout << typeid(resultInt).name() << endl; 
	bool resultBool = static_cast<bool>(number);
	//Выполнил операцию if-else потому, что при обычном выводе вместо True/False выдаёт 1/0
	if (resultBool == 1) {
		cout << "Число не равно 0? true" << endl;
	} else {
		cout << "Число не равно 0? false" << endl;
	}
	cout << typeid(resultBool).name() << endl;
	return 0;
}