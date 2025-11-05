#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
    string word;
    cout << "Введите строку: ";
    getline(cin, word);
    if (word.length() > 100) {
        cout << "Длинна строки превышает максимально допустимое значение. Повторите ввод: ";
        getline(cin, word);
    }
    bool isogram = true;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == ' ') {
            continue;
        }
        for (int j = i + 1; j < word.length(); j++) {
            if (word[j] == ' ') {
                continue;
            }
            if (word[i] == word[j]) {
                isogram = false;
                break;
            }
        }
    }
    if (isogram) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0;
}