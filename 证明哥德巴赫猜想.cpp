#include<iostream>
#include<iomanip>
using namespace std;
//证明哥德巴赫猜想，任何大于四的偶数可以分解为两个素数的和
int main()
{
	cout << "2019113681周聪杰" << endl;
	bool prime(int);
	for (int i = 6; i <=50 ; i=i+2)
	{
		for (int j = 3; j <= i / 2; j++)
		{
			if (prime(j)&&prime(i-j))
			{
				cout <<setw(2)<< i << "=" << setw(2) << j << "+" << setw(2) << i - j << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}
bool prime(int j)
{
	bool f = 1;
	for (int i = 2; i <=sqrt((double)j); i++)
	{
		if (j % i == 0)
		{
			f = 0;
			break;
		}
	}
	return f;
}