#include <iostream>
using namespace std;

int main()
{
	int friends;
	cout << "How many friends do you have? ";
	cin >> friends;
	int ages[50];
	int minAge = 1000;
	int maxAge = -1;
	cout << "Enter the ages of your " << friends << " friends: ";
	for (int i = 0; i < friends; i++)
	{
		cin >> ages[i];
	}
	for (int i = 0; i < friends; i++)
	{
		if (ages[i] > maxAge)
		{
			maxAge = ages[i];
		}
		if (ages[i] < minAge)
		{
			minAge = ages[i];
		}
	}
	cout << "The oldest of your friends is " << maxAge << " years old. The youngest is " << minAge << "."<<endl;

	system("pause");
	return 0;

}
