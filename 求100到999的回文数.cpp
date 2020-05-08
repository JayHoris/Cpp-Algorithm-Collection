#include<iostream>
#include<iomanip>
using namespace std;
//两种方法求回文
int main()
{
	cout << "2019113681周聪杰" << endl;
	int n, m, num = 0, r;
	cout << "Enter the number:";
	cin >> n; 
	m = n; 
	while (n != 0)//利用取各数位数字的方法求一个数的反序数
	{     
		r=n%10;          //取数最右边的数字
		num=num*10+r;    // 对各数字左移，以求反序数
		n/=10;/*去掉已经处理的最最右边的数字，为获取下一个数字做准备*/
	}
	if(num==m)
		cout <<"整数"<<m<<"是回文"<<endl;
	else
		cout <<"整数"<<m<<"不是回文"<<endl;


	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int  j = 0; j < 10; j++)
		{
			n = i * 100 + j * 10 + i;
			cout << setw(6) << n;
			if (++count % 5 == 0)	cout << endl;//！！！很重要
		}
	}
	return 0;
}