#include <iostream>
#include <string>
using namespace std;

void isPalindrom(string word) {
	string temp;
	bool t = true;
	for (int i = word.size() - 1; i >= 0; --i) {
		temp += word[i];
		t = false;
	}
	if (word == temp) {
		cout << "Это палиндром\n";
	}
	else {
		cout << "Это не палиндром\n";
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Палиндром или нет.\n";
	string word;
	cout << "Введите слово: ";
	cin >> word;
	isPalindrom(word);

	system("pause");
}
