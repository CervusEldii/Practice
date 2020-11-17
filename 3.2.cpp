#include <iostream> 
#include <cmath>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Найти в строке второе вхождение буквы f и вывести индекс этого вхождения.\n";
	string text;
	cout << "Введите слово на английском:";
	cin >> text;
	int position = -2;
	for (int i = 0, limit = text.size(); i < limit; ++i)
	{
		if (text[i] == 'f' || text[i] == 'F')
		{
			++position;
			if (position == 0)
			{
				position = i;
				break;
			}
		}
	}
	cout << "Индекс вхождения буквы f: " << position << "\n";

	system("pause");
}
