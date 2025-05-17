
#include <iostream>
using namespace std;

int main()
{
	int size = 0;
	string symbol;
	cout << "input size: ";
	cin >> size;
	cout << "input the symbol: ";
	cin >> symbol;
	cout << "\n";

	for (int j = 1; j <= size; j++) {
		for (int i = 0; i < j; i++) {
			cout << symbol << " ";
		}

		cout << "\n";
		
	}
}
