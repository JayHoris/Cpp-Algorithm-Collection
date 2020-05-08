#include<iostream>
using namespace std;
//循环控制语句的变形
int main()
{
	cout << "2019113681周聪杰" << endl;
	int a = 3;
	while (a--)
	{
		cout << "ya=" << a << endl;
	}
	cout << "a=" << a<<endl << endl << endl;

	 a = 3;
	while (a--,a)//判断最后一个变量的值
	{
		cout << "ya=" << a << endl;
	}
	cout << "a=" << a;
	return 0;
}