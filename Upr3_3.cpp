#include<iostream>
using namespace std;
int main()
{
	double grades[5],sum=0;
	cout << "Insert your grades,please: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> grades[i];
		sum = sum + grades[i];
	}
	cout << "Your GPA is: " << sum / 5 << endl;
	system("pause");
	return 0;
}