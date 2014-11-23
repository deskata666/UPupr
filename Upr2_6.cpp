#include<iostream>
using namespace std;
int main()
{
	int binary = 0;
	int n;
	cout << "Number: ";
	cin >> n;
	int reminder = 0;
	int result = 0;
	int position = 1;
	while (n > 0)
	{
		reminder = n % 2;
		result =result + reminder*position;
		n = n / 2;
		position *= 10;
	}
	cout << "Number in binary= " << result << endl;
	return 0;
}