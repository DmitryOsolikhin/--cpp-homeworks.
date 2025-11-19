#include <iostream>
#include <string>
using namespace std;
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);

}
int main() {
    setlocale(LC_ALL, "RU");
    int numberx;
    cout << "Введите число: ";
    cin >> numberx;
    cout << "Факториал: " << factorial(numberx);
    return 0;
}