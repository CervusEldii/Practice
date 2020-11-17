#include <iostream> 
#include <cmath> 
using namespace std;

void toBinary(int a) {
    int mod[1000];
    long c = 0, i = 0;
    do {
        mod[i] = (a % 2);
        i++;
        a /= 2;
    } while (a > 0);
    cout << " в двоичной системе: ";
    for (i -= 1; i >= 0; i--) {
        cout << mod[i];
    }
    cout << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Перевод в двоичную систему счисления \n";
    int a;
    cout << "Введите целое положительное число: ";
    cin >> a;
    cout << a;
    toBinary(a);

    system("pause");
}

