#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	system("chcp 1251");
	string word;
	cout << "Введите строку: ";
	getline(cin, word);
	cout << "Первый символ: " << word[0];
	return 0;
}