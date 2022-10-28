#include <iostream>

using namespace std;

int main()
{
	cout << "Witaj Filip" << endl;
	cout << endl << "Podaj numer PIN" << endl;
	int pin;
	cin >> pin;

	if (pin == 6919)
	{
		cout << "Poprawny pin!" << endl;
	}
	else
	{
		cout << "Niepoprawny pin!" << endl;
	}
	return 0;
}