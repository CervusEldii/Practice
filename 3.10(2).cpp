#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    const unsigned short n = 20;
    cout << "Начиная в левом верхнем углу сетки 2на2 и имея возможность двигаться только вниз или вправо, существует ровно 6 маршрутов до правого нижнего угла сетки. Сколько существует таких маршрутов в сетке 20на20?"  << endl;
        unsigned long long p[n][n];
        for (unsigned short i = 2; i <= n; i++)
            p[n - i][n - 1] = i + 1;
        for (unsigned short i = n - 2; i >= 1; i--) {
            p[i][i] = 2 * p[i][i + 1];
            for (unsigned short k = i; k >= 1; k--)
                p[k - 1][i] = p[k][i] + p[k - 1][i + 1];
        }
        cout <<"Ответ: "<< 2 * p[0][1] <<" маршрутов" << endl;
    
system("pause");
}