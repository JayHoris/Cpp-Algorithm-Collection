#include<iostream>
using namespace std;
//输入一个整数，反转后输出
int main()
{
	cout << "2019113681周聪杰" << endl;
	int n, r, m;
	cout << "请输入你的整数：";
	cin >> n;
	do
	{
		m = n % 10;				//求出最右边的数
		cout << m;
		n = n / 10;				//去掉最右边的数
	} while (n != 0);

	cout << endl << endl << endl;
	//方法二
		cout << "2019113681周聪杰" << endl;
		cout << "请输入你的整数：";
		cin >> n;
		r = n % 10;
		m = r;					//预处理一次
		while (n >=10)
		{
			n = n / 10;			//去掉最右边的一个数
			r = n % 10;			//求最右边的数
			m = m * 10 + r;		//逆序求和
		}
		cout << m;

	//方法三(方法二三很像，需要细品)
		cout << "请输入你的整数：";
		cin >> n;
		m = 0;
		while (n != 0)
		{
			r = n % 10;
			m = m * 10 + r;
			n / 10;//去掉已经处理过的数字，为下一次处理做准备
		}
		cout << m;
		return 0;
}