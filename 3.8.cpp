#include <iostream> 
#include <math.h>
#include <stdlib.h>
using namespace std;

void fibs(int stop, int step) {
    int p = step, a = 0, b = 0, c = 0, abc = 0;
    for (int n = 1; n < p; n++) {
        for (int m = 2; m < (p + 1); m++) {
            if (m > n) {
                a = 2 * n * m;
                b = pow(m, 2) - pow(n, 2);
                c = pow(m, 2) + pow(n, 2);

                if (a + b + c == stop) {
                    cout << "a: " << a << "\nb: " << b << "\nc: " << c << endl;
                    abc = a * b * c;
                    cout << "a * b * c = " << abc << endl;
                    break;
                }
            }
        }
    }
    p += step;
}

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Существует только одна тройка Пифагора, для которой a^2 + b^2 + c^2 = 1000.\n";
    int p = 1000;
    int step = 100;
    fibs(p, step);

    system("pause");
}
