#include <iostream> 
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Поиск суммы всех четных элементов ряда Фибоначчи, которые не превышают четыре миллиона.\n";
    long int a = 1, b = 2, F = 0;
    long double sum_even = 2;
    do {
        F = a + b;
        if (F % 2 == 0)
            sum_even += F;
        a = b;
        b = F;
    } while (F <= 4000000);
    cout << "Сумма всех четных элементов ряда Фибоначчи (которые не превышают четыре миллиона): " << sum_even << endl;

    system("pause");
}