#include <iostream> 
#include <cmath> 

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Нахождение наибольшего общего делителя \n";
    int a, b, c;
    cout << "Введите два натуральных числа: \n";
    cin >> a >> b; 
    if (a > b)c = b; 
    else c = a;
    while (a % c != 0 || b % c != 0) { 
        --c;
    }
    cout << "Наибольший общий делитель: " << c << "\n";
    system("pause");
}
