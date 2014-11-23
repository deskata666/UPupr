#include <iostream>
#include <string>
using namespace std;

int main()
{
	string humanOne;
	string humanTwo;
	string humanThree;
	string humanFour;
	string humanFive;
	string humanSix;
	string humanSeven;
	string humanEight;
	string humanNine;
	string humanTen;
	string humanEleven;
	string humanTwelve;
	string humanThirteen;
	string humanFourteen;
	string humanFifteen;
	string humanSixteen;
	string humanSeventeen;
	string humanEighteen;
	string humanNineteen;
	string humanTwenty;
	cout << "First without array: " << endl;
	cout << "Enter number one: " ;
	getline(cin, humanOne);
	cout << "Enter number two: ";
	getline(cin, humanTwo);
	cout << "Enter number three: ";
	getline(cin, humanThree);
	cout << "Enter number four: ";
	getline(cin, humanFour);
	cout << "Enter number Five: ";
	getline(cin, humanFive);
	cout << "Enter number six: ";
	getline(cin, humanSix);
	cout << "Enter number seven: ";
	getline(cin, humanSeven);
	cout << "Enter number eight: ";
	getline(cin, humanEight);
	cout << "Enter number nine: ";
	getline(cin, humanNine);
	cout << "Enter number ten: ";
	getline(cin, humanTen);
	cout << "Enter number eleven: ";
	getline(cin, humanEleven);
	cout << "Enter number twelve: ";
	getline(cin, humanTwelve);
	cout << "Enter number thirteen: ";
	getline(cin, humanThirteen);
	cout << "Enter number fourteen: ";
	getline(cin, humanFourteen);
	cout << "Enter number fifteen: ";
	getline(cin, humanFifteen);
	cout << "Enter number sixteen: ";
	getline(cin, humanSixteen);
	cout << "Enter number seventeen: ";
	getline(cin, humanSeventeen);
	cout << "Enter number eighteen: ";
	getline(cin, humanEighteen);
	cout << "Enter number nineteen: ";
	getline(cin, humanNineteen);
	cout << "Enter number twenty: ";
	getline(cin, humanTwenty);
		

	cout << "Number one is: " + humanOne << endl;
	cout << "Number two is: " + humanTwo << endl;
	cout << "Number three is: " + humanThree << endl;
	cout << "Number four is: " + humanFour << endl;
	cout << "Number five is: " + humanFive << endl;
	cout << "Number six is: " + humanSix << endl;
	cout << "Number seven is: " + humanSeven << endl;
	cout << "Number eight is: " + humanEight << endl;
	cout << "Number nine is: " + humanNine << endl;
	cout << "Number ten is: " + humanTen << endl;
	cout << "Number eleven is: " + humanEleven << endl;
	cout << "Number twelve is: " + humanTwelve << endl;
	cout << "Number thirteen is: " + humanThirteen << endl;
	cout << "Number fourteen is: " + humanFourteen << endl;
	cout << "Number fifteen is: " + humanFifteen << endl;
	cout << "Number sixteen is: " + humanSixteen << endl;
	cout << "Number seventeen is: " + humanSeventeen << endl;
	cout << "Number eighteen is: " + humanEighteen << endl;
	cout << "Number nineteen is: " + humanNineteen << endl;
	cout << "Number twenty is: " + humanTwenty << endl<<endl;

	cout << "Now with array" << endl<<endl;
	string classmates[20];
	for (int i = 0; i < 20; i++)
	{
		cout << "Enter number " << i+1 << " ";
		getline(cin, classmates[i]);
	}
	for (int i = 0; i < 20; i++)
	{
		cout << "Number " << i + 1 << " is " << classmates[i] <<endl;
	}
	system("pause");
	return 0;
}