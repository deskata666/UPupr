#include<iostream>
using namespace std;
int main()
{
	int number;
	cout << "Insert number: ";
	cin >> number;
	cout << number / 1000 << endl;
	cout << (number / 100)%10 << endl;
	cout << (number / 10) % 10 << endl;
	cout << number % 10 << endl;
	return 0;
}
