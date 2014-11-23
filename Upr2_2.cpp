#include<iostream>
using namespace std;
int main()
{
	bool flag = true;
	int a;
	cout << "Number: ";
	cin >> a;
	if (a == 1 ) cout << "No"<<endl;
	for (int i = 1; i <= (a / 2); i++)
	{
		if (a % i == 0)
		{
			flag = false;
			break;
		}
	}
	if (flag) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}