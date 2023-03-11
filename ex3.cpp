#include<iostream>
using namespace std;

int main()
{
	int inputx = 0, inputy = 0;
	while (cin >> inputx >> inputy)
	{
		if (inputx * inputx + inputy * inputy <= 10000) cout << "inside" << endl;

		else cout << "outside" << endl;
	}
	system("pause");
	return 0;
}
