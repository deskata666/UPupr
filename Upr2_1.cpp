#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "Insert symbol: ";
	cin >> a;
	if (isdigit(a)) cout << "Number"<<endl;
	if (isupper(a)) cout << "upper-case letter" << endl;
	if (islower(a)) cout << "lower-case letter" << endl;
	return 0;
}