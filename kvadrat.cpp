
#include <iostream>
using namespace std;

int main()
{
	int size = 0;
	string str;
	string symbol;
	cout << "input size: ";
	cin >> size;
	cout << "input the symbol: ";
	cin >> str;
	symbol = str;
	cout << "\n";

	for (int j = 0; j < 1; j++) {
		for (int i = 0; i < size; i++) {
			cout << symbol << "\n";
			symbol = symbol + str;
		}
		cout << "\n";
		
	}
}
