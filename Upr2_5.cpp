#include<iostream>
#include <algorithm> 
using namespace std;
int main()
{
	int number;
	cout << "Number: ";
	cin >> number;
	int answer = number;
	int new_num = 0;
	while (number > 0)
	{
		new_num = new_num * 10 + (number % 10);
		number = number / 10;
	}
	if (answer == new_num){
		cout << answer << " is palindrom" << endl;
	}
	else cout <<answer << " is not palindrom" << endl;
	system("Pause");
	return 0;
}