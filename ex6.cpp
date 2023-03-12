#include<iostream>
using namespace std;

int main()
{
	int input = 0;

	cin >> input;
	switch (input / 3)
	{
	case 1:cout << "Spring" << endl; break;
	case 2:cout << "Summer" << endl; break;
	case 3:cout << "fall" << endl; break;
	default:cout << "Winter" << endl;
	}
	system("pause");
	return 0;
}
