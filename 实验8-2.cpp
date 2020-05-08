#include<iostream>
#include<iomanip>
using namespace std;
//
int main()
{
	cout << "2019113681周聪杰" << endl;
	const int N = 20;//数组长度
	int a[N] = { 0 }, b[N] = {0}, n=10, max, min, max_i, min_i;
		//定义数组并初始化,记录实际数据长度，最大值最小值及其坐标
	int i, j;//计数器
	bool prime(int);//定义判断素数的函数
	cout << "请输入10个正整数：";
	//输入数据
	for ( i = 0; i < n; i++)
		cin >> a[i];

	//查找最大最小值及其下标
	max = min = a[0];
	max_i = min_i = 0;
	for ( i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max_i = i;
			max = a[i];
		}//查找最大的数并记录下标
		if (a[i] < min)
		{
			min_i = i;
			min = a[i];
		}//查找最小的数并记录下标
	}
	cout << "a数组中最大值是：" << endl << max << ",其下标为：" << max_i << endl
		<< "a数组中最小值是：" << endl << min << ",其下标为：" << min_i;

	for (i = 0,j=0; i < n; i++)
	{
		if (prime(a[i]))//判断是否为素数
		{
			b[j] = a[i];//若是则储存进b数组
			j++;//b的下标+1
		}
	}

	cout <<endl<< "反向输出b数组结果为：" << endl;
	for (i = j-1; i >=0; i--)
		cout<< setw(10) << b[i];
	return 0;
}

//判断是否为素数
bool prime(int j)
{
	bool f = 1;//默认是素数
	for (int i = 2; i <= sqrt((double)j); i++)
	{
		if (j % i == 0)
		{
			f = 0;//不是素数
			break;
		}
	}
	return f;
}