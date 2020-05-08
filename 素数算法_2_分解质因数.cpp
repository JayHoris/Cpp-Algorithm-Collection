#include<iostream>
#include<cmath>
using namespace std;
//判断是否为素数，且彻底分解质因数
int m, r, i, a, b;
char Ans = 'y';
int main()
{
	cout << "2019113681周聪杰" << endl;
	int ZhiShu(int r);//声明用于判断质数的函数
	do
	{
		m = r = i = a = b = 0;
		/*m是输入的数，
		a、b用于在循环里面控制只输出一句“是/否素数"
		i用于控制质数判断的底数
		*/
		cout << "请输入要判断的数：";
		cin >> m;
		r = m;
		for (;;)
		{
			i = 2;
			r = ZhiShu(r);//调用函数
			if (i <= sqrt(r))
			{
				if (b == 0)	cout << "不是质数,且它的质因数分解如下:" << m << "=";
				r = r / i;
				cout << i << "*";	//每次循环中第一个可以整除的除数一定是质数
				a++, b++;
			}
			else
			{
				if (a == 0)
				{
					cout << "是质数";//退出上面的whlie循环后，如果a没有自加的话，说明n是质数
					break;
				}
				else
				{
					cout << r << " ";//输出最后一个质因数
					break;
				}
			}
		}
		cout << endl << endl << "是否继续？";
		cin >> Ans;
		cout << endl;
	} while (Ans == 'y' || Ans == 'Y');
	return 0;
}
int ZhiShu(int r)
{
	while (i <= sqrt(r))
	{
		if (r % i == 0) break;
		else i++;
	}
	return i;
}
/*
#include<iostream>
#include<cmath>
using namespace std;
//判断是否为素数，且彻底分解质因数
int main()
{
	cout << "2019113681周聪杰" << endl;
	int m, r,a,i,b,c;
	char Ans = 'y';
	do
	{
		m =r=i=b=c= 0;
		//是输入的数，
		//a用于让质数的判断一直循环，
		//b、c用于在循环里面控制只输出一句“是/否素数”（否则会有很多句是否为素数）
		//i用于控制质数判断的底数

a = 1;
cout << "请输入要判断的数：";
cin >> m;
r = m;
do
{
	i = 2;
	while (i <= sqrt(r))
	{
		if (r % i == 0) break;
		else i++;
	}
	if (i <= sqrt(r))
	{
		if (c == 0)	cout << "不是质数,且它的质因数分解如下:";
		r = r / i;
		cout << i << "*";
		b++;
		c++;
	}
	else
	{
		if (b == 0)
		{
			cout << "是质数";
			break;
		}
		else
		{
			cout << r << " ";
			break;
		}
	}
} while (a == 1);
cout << endl << endl << "是否继续？";
cin >> Ans;
cout << endl;
	} while (Ans == 'y' || Ans == 'Y');
	return 0;
}
*/