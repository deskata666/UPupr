#include<iostream>
using namespace std;
int main()
{
	bool flag = true;
	int array[20],n;
	cout << "Lenght of the array: ";
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cout << "array[" << i+1 << "]= ";
		cin >> array[i];
	}
	for (int i = 1; i < n-1; i++)
	{
		if (((array[i]>array[i - 1]) && (array[i] > array[i + 1])) || ((array[i] < array[i - 1]) && (array[i] < array[i + 1]))) flag = false;
	}
	if (flag) cout << "Is sorted"<<endl;
	else cout << "Is not sorted" << endl;
	return 0;
}
