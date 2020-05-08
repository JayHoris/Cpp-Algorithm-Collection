#include<iostream>
#include<cmath>
using namespace std;
//判断是否为素数
int main()
{
	cout << "2019113681周聪杰" << endl;
	int m, r, a;
	char Ans = 'y';
	do
	{
		m = r = 0;
		a = 1;
		cout << "请输入要判断的数：";
		cin >> m;
		for (int i = 2; i <= sqrt(m); i++)
		{
			if (m % i == 0)
			{
				a++;
				r = m / i;
				if (a == 1)
					cout << "不是质数,且可以为一下两数相乘：";
				cout << i << "*" << m / i << "	";

			}
		}
		if (a == 0) 
			cout << "是质数";
		cout << endl << endl << endl;
	} while (a);
	return 0;
}

/*
#include<iostream>
#include<cmath>
using namespace std;
//判断是否为素数
int main()
{
	cout << "2019113681周聪杰" << endl;
	int m, r,a;
	char Ans='y';
	do
	{
		m = r = a = 0;
		cout << "请输入要判断的数：";
		cin >> m;
		for (int i = 2; i <= sqrt(m); i++)
		{
			if (m % i == 0)
			{
				a++;
				r = m / i;
				if (a == 1)
				{
					cout << "不是质数,且可以为一下两数相乘：";
				}
				 cout << i << "*" << m / i << "	";

			}
		}
		if (a == 0) cout << "是质数";
		cout << endl<<endl << "是否继续？";
		cin >> Ans;
		cout << endl;
	} while (Ans == 'y' ||Ans== 'Y');
	return 0;
}*/