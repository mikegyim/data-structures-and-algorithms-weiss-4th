#include <iostream>
using namespace std;
int myFunc(int);//function protype
int yourFunc(int);
int powerFunc(int);
int main()
{
	int a;
	a = 10;
	cout << "MyFunc(10) = " << myFunc(10) << endl;
	cout << "yourFunc(10) = " << yourFunc(10) << endl;
	cout << "powerFunc(10) = " << powerFunc(3) << endl;
	return 0;
}

int myFunc(int n)
{
	//base case
	if (n == 0)
		return 1;

	else // General case
		return myFunc(n - 1) + 2;
}


int yourFunc(int n)
{
	if (n <= -1)
		cout << "could not find output" << endl;
	if (n == 0)
		return 1;
	else
		return 2 * yourFunc(n - 1);
}

int powerFunc(int n)
{
	if (n == 0)
		return 1;
	else
		return 2 * powerFunc(n - 1);

}