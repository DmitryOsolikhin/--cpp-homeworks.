#include <iostream>
#include <string>
using namespace std;
void increase(int &x) {
    x = x + 10;
}
int main() {
    setlocale(LC_ALL, "RU");
    int numberx;
    cout << "Введите число: ";
    cin >> numberx;
    increase(numberx);
    cout << "Новое значение: " << numberx;
    return 0;
}