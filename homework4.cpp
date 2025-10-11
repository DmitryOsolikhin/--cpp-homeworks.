#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	float number;
	cout << "Ââåäèòå ÷èñëî c ïëàâàþùåé òî÷êîé: ";
	cin >> number;
	double resultDouble = static_cast<double>(number);
	cout << "Êàê double: " << resultDouble << endl;
	cout << typeid(resultDouble).name() << endl;
	int resultInt = static_cast<int>(number);
	cout << "Êàê int: " << resultInt << endl;
	cout << typeid(resultInt).name() << endl; 
	bool resultBool = static_cast<bool>(number);
	//Âûïîëíèë îïåðàöèþ if-else ïîòîìó, ÷òî ïðè îáû÷íîì âûâîäå âìåñòî True/False âûäà¸ò 1/0
	if (resultBool == 1) {
		cout << "×èñëî íå ðàâíî 0? true" << endl;
	} else {
		cout << "×èñëî íå ðàâíî 0? false" << endl;
	}
	cout << typeid(resultBool).name() << endl;
	return 0;

}
