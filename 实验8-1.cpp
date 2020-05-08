#include<iostream>
#include<iomanip>
using namespace std;
//格式输出数据，计算平均数，大于平均值的数在前
int main()
{
	cout << "2019113681周聪杰" << endl;
	const int N = 20;//数组长度
	double a[N] = { 0 }, b[N] = { 0 }, temp;
	//定义数组并初始化,用b数组储存a数组的值便于后面多种方法，temp为中间变量
	int n = 15,i = 0, j = n - 1;//n记录实际数据长度,i、j为计数器
	cout << "请输入15个实型数：";
	for (i = 0; i < n; i++)//输入数据
	{
		cin >> a[i];
		b[i] = a[i];
	}
	//格式输出数据
	for ( i = 0; i < n; i++)
	{
		cout << setw(10) << a[i];//控制数据域宽
		if ((i + 1) % 5 == 0 && i != (n-1))	cout << endl;//每五个数换行且最后一行不换行
	}

	//计算平均值
	for (  i = 0; i < n; i++)
		a[n] += a[i];//计算数组的和，储存在最后一位
	a[n] /= (double)n;//计算平均数，储存在最后一位
	
	//大于平均值的数在前，小于平均数的数在后__方法一
	for ( i = 0; i < j; i++)
		if (a[i] < a[n])//判断第i个数是否小于平均数
			for (; j > i; j--)//若小于，则从后往前找
				if (a[j] > a[n])//找到大于平均数的数，二者交换
				{
					temp = a[j];
					a[j] = a[i];
					a[i] = temp;
					break;//交换完后进行跳出循环，否则多个j会交换同一个i
				}

	//输出调整后的a
	cout << endl <<"调整后的数组为："<<endl;
	for (i = 0; i <= n; i++)
	{
		cout << setw(10) << a[i];//控制数据域宽
		if ((i + 1) % 5 == 0 )	cout << endl;//每五个数换行
	}

	//大于平均值的数在前，小于平均数的数在后__方法二
	double c[N] = { 0 };

	for ( i = 0; i < n; i++)
	{
		c[i] = b[i];//读取最初的数组
	}
	c[n] = a[n];//读取平均数
	i = 0, j = n - 1;
	while (j>=i)
	{
		if (c[i] < c[n] && c[j]>c[n])//如果二者符合要求，则交换位置，同时指向移动
		{
			temp = c[i];
			c[i] = c[j];
			c[j] = temp;
			i++, j--;
		}
		else
			if (c[i] < c[n]) j--;//向前搜索大于平均数的数与i配对
			else
				if (c[j] > c[n]) i++;//向后搜索小于平均数的数与j配对
				else
					i++, j--;//位置正确，
	}

	//输出调整后的a
	cout << endl << "调整后的数组为：" << endl;
	for (i = 0; i <= n; i++)
	{
		cout << setw(10) << a[i];//控制数据域宽
		if ((i + 1) % 5 == 0 )	cout << endl;//每五个数换行
	}
	return 0;
}