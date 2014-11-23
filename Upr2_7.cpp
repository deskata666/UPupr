#include<iostream>
using namespace std;
int main()
{
	int n,min_points,max_points,min,max;
	cout << "Number of competiotors: ";
	cin >> n;
	int points[100];
	for (int i = 0; i < n; i++)
	{
		cout << "Points of competitor number " << i+1<< " ";
		cin >> points[i];
	}
	min_points = points[0];
	max_points = points[0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (points[i]>points[j] && max_points<=points[i])
			{
				max_points = points[i];
				max = i+1;
			}
			if (points[i] < points[j] && min_points>=points[i])
			{
				min_points = points[i];
				min = i+1;
			}
		}
	}
		cout << "Competitor number " << max << " has " << max_points <<" points"<< endl;
		cout << "Competitor number " << min << " has " << min_points << " points" << endl;
		system("pause");
	return 0;
}