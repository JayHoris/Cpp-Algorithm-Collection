#include<iostream>
using namespace std;
//十进制八进制转换_两种方法_第二种方法走捷径，不一定可取
int n=0, r, w = 1, w1, c, T;
double result = 0;
int main()
{
	cout << "2019113681周聪杰" << endl;
	int method_1(int n);
	int method_2(int n);
	result = method_1(n);
	cout << "方法一转换后的结果为：" << result<<endl;
	result = method_2(n);
	return 0;
}
int method_1(int n)
{

	cout << "请输入需要转化的方式：1、八转十，2、十转八\n";
	cin >> T;
	switch (T)
	{
	case 1:c = 10; w1 = 8; break;
	case 2:c = 8; w1 = 10; break;
	default:cout << "请输入正确的转化方式："; break;
		//根据位权法确定转化的位权或者取余法确定要取的除数
	}
	cout << "请输入你想要" << w1 << "转" << c << "的数：";
	cin >> n;
	do
	{
		r = n % c;
		result += (double)r * w;
		w = w * w1;
		n = n / c;		//位权法转换或取余法转换
	} while (n != 0);
	return result;
}

int method_2(int n)
{
	int a, x;
	cout << "请输入需要转化的方式：1、八转十，2、十转八\n";
	cin >> a;
	switch (a)
	{
	case 1:cout << "请输入八进制数：";
		cin >>oct>> x;//这一步很关键，通过oct确定输入的数为八进制
		cout << "方法二转换后的结果为：" << dec << x;
		break;	//利用控制符doc和oct转换八进制和十进制
	case 2:cout << "请输入十进制数：";
		cin  >> x;
		cout << "方法二转换后的结果为：" << oct << x;
		break;
	default:cout << "请输入正确的方式；"; break;
	}
	return x;
}
