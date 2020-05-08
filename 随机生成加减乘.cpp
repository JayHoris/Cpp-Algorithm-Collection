#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//1`10加减乘运算训练系统
int x, y, a, answer, result;
//x,y为随机数，a用于随机生成运算符，answer是用户输入结果，result是真实结果
char yunSuanFu;//用于储存运算符
int main()
{
	cout << "2019113681周聪杰" << endl;
	int add(int x, int y);
	int sub(int x, int y);
	int mul(int x, int y);
	srand(time(NULL));//利用系统时间生成不重复的随机数
	x = 1 + rand() % 10;
	y = 1 + rand() % 10;
	a = rand() % 3;
	//生成三个随机数
	switch (a)
	{
	case 1:yunSuanFu = '+'; result = add(x, y); break;
	case 2:yunSuanFu = '-'; result = sub(x, y); break;
	case 0:yunSuanFu = '*'; result = mul(x, y); break;
	}
	//利用随机数a的值，用来随机生成运算符，同时调用对应运算符的函数
	cout << "请计算" << x << yunSuanFu << y << "=";
	cin >> answer;
	if (answer == result)
		cout << "计算准确！";
	else
		cout << "计算错误！" << x << yunSuanFu << y << "=" << result;
	return 0;
}
int add(int x, int y)//加法函数
{
	return(x + y);
}
int	sub(int x, int y)//减法函数
{
	return(x - y);
}
int mul(int x, int y)//乘法函数
{
	return(x * y);
}