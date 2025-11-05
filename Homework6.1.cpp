#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	int numbers[5];
	for (int i = 0; i < 5; i++) {
		numbers[i] = rand();
	}
	cout << "Ёлементы массива: " << endl;
	for (int i = 0; i < 5; i ++) {
		cout << numbers[i] << " ";
	}
	return 0;
}