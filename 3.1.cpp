#include <iostream> 
#include <cmath> 
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Поиск корней квадратного уравнения Ax^2 + Bx + C = 0 \n";
    double a, b, c, D, x1, x2;
    cout << "Введите A, B и C: \n";
    cin >> a >> b >> c;
    cout << "Уравнение: " << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

    if (a == 0) {
        x1 = -(c / b);
        cout << "Корень уравнения: x = " << x1 << "\n";
    }
    else {
        D = pow(b, 2) - 4 * a * c;
        if (D > 0) {
            x1 = ((-b) + sqrt(D)) / (2 * a);
            x2 = ((-b) - sqrt(D)) / (2 * a);
            cout << "Корни уравнения:\nx1 = " << x1 << "\nx2 = " << x2 << endl;
        }else if (D == 0) {
            x1 = -(b / (2 * a));
            cout << "Корень уравнения: x = " << x1 << "\n";
        }else if (D < 0) {
            cout << "D < 0, у данного уравнения нет корней.\n";
        }
    }
    system("pause");
}
