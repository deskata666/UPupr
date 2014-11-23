#include<iostream>
using namespace std;
int main()
{
	int a,n;
	cout << "1- One digit number" << endl
		<< "2 - Two digits numbers" << endl
		<< "3 - Three digits number" << endl
		<< "4 - Four digits number" << endl
		<< "5 - Five digits number" << endl;
		
	cout << "Number of digits: ";
	cin >> n;
	cout << "Number: ";
	cin >> a;
	if (n == 5){
		cout << a / 10000 << endl;
		a = a % 10000;		
		n--;

	}
	if (n == 4){
		cout << a / 1000 << endl;
		a = a % 1000;
		n--;

	}
	if (n == 3){
		cout << a / 100 << endl;
		a = a % 100;
		n--;

	}
	 if (n == 2){
		 cout << a / 10 << endl;
		 a = a % 10;
		 n--;

	}
	 if (n == 1){
		 cout << a  << endl;

	}
	return 0;
}
