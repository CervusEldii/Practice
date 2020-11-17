#include <iostream>
using namespace std;

void Factorial(int c) {
	cout << c << "! = ";
	int m[5000];
	for (int i = 0; i < 5000; i++) {
		m[i] = 0;
		m[0] = 1;
	}
	for (int i = 1; i <= c; i++) {
		for (int j = 0; j < 5000; j++) {
			m[j] *= i;
		}
		for (int j = 0; j < 5000; j++) {
			if (m[j] > 10) {
				m[j + 1] += m[j] / 10;
				m[j] = m[j] % 10;
			}
		}
	}
	bool b = true;
	for (int i = 4999; i >= 0; i--) {
		if (m[i] == 0 && b == true)
			continue;
		else
			b = false;
		cout << m[i];
	}
	cout << endl;

}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Нахождение факториала \n";
	int a;
	cout << "Введите число: ";
	cin >> a;
	Factorial(a);
	system("pause");
}
