#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a = 0, b = 0;
    for (int i = 1; i < 101; i++) {
        a += i * i;
    }
    cout << "Сумма квадратов первых ста чисел: " << a << endl;
    for (int i = 1; i < 101; i++) {
        b += i;
    }
    b = pow(b, 2);
    cout << "Квадрат суммы первых ста чисел: " << b << endl;

    int r = b - a;
    cout << "Разность между суммой квадратов и квадратом суммы: ";
    cout << r << endl;

    system("pause");
}
