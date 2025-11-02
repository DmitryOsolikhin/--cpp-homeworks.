#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int number;
	cout << "Ââåäèòå ÷èñëî N: ";
	cin >> number;
	cout << "×èñëà îò 1 äî " << number << ":" << endl;
	for (int i = 1; i <= number; i++) {
		cout << i << " ";
	}
    return 0;
}
