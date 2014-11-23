#include<iostream>
using namespace std;
int main()
{
	char word[7];
	cout << "Insert a word with 5,6 or 7 letters: ";
	cin >> word;
	cout << "Reversed: ";
	int length = strlen(word);
	for (int i = length; i > 0; i--)
	{
		cout << word[i - 1];
	}
	cout << endl;
	system("pause");
	return 0;
}