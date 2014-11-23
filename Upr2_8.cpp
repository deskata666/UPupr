#include <iostream>
using namespace std;

int main()
{
	int length;
	char symbol;

	cout << "Input number and symbol separated by empty space." << endl;
	cin >> length >> symbol;

	for (int i = 0; i< length; i++)
	{
		cout << symbol << " ";
	}
	cout << endl;
	int wrapper = 1;
	for (; wrapper < length - 1; wrapper++)
	{
		for (int counter = 0; counter< length * 2 - 1; counter++)
		{
			if (counter == wrapper || counter == length * 2 - wrapper - 2)
			{
				cout << symbol;
			}
			else{
				cout << " ";
			}

		}
		cout << endl;
	}

	for (int i = 0;; i++)
	{
		if (i == wrapper)
		{
			cout << symbol << endl;
			break;
		}
		cout << " ";
	}
	system("pause");
	return 0;
}