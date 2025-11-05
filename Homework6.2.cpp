#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	int numbers[3][3],sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			numbers[i][j] = rand()% 9 + 1;
		}
		
	}
	cout << "Ёлементы массива: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum = sum + numbers[i][j];
			cout << numbers[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "—умма элементов: " << sum;
	return 0;
}