#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int number;
	cout << "Ââåäèòå ÷èñëî: ";
	cin >> number;
	if (number > 0) {
		cout << "×èñëî ïîëîæèòåëüíîå";
	}
	else {
		if (number == 0) {
			cout << "×èñëî ðàâíî íóëþ";
		}
		else {
			cout << "×èñëî îòðèöàòåëüíîå";
		}
	}
    return 0;
}
