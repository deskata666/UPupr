#include<iostream>
using namespace std;
int main()
{
	int array[20], length,value;
	cout << "Length of the array: ";
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		cout << "array[" << i + 1 << "]= ";
		cin>>array[i];
	}
	for (int i = 1; i < length ; i++)
	{
		value = array[i];
		int j = i - 1;
		while ((j >= 0) && (array[j]>value))
		{
			array[j+1] = array[j];
			j = j - 1;
		}
		array[j + 1] = value;
	}
	cout << "Sorted: ";
	for (int i = 0; i < length; i++)
	{
		cout<<array[i]<<" ";
	}
	system("pause");
		return 0;
}