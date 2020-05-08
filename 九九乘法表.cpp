#include<iostream>
#include<iomanip>
using namespace std;
//¾Å¾Å³Ë·¨±íp72
int main()
{
	cout << "2019113681ÖÜ´Ï½Ü" << endl;
	for (int i = 1; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			cout << i << "*" << j << "=" <<setw(2)<< i * j<<"  ";
		}
		cout << endl;
	}
	return 0;
}