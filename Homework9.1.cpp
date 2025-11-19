#include <iostream>
#include <string>
using namespace std;
int square(int x) {
    return x * x;
}
int main() {
    setlocale(LC_ALL, "RU");
    int numberx;
    cout << "¬ведите число: ";
    cin >> numberx;
    cout << " вадрат: " << square(numberx);
    return 0;
}