#include<iostream>
#include<iomanip>
using namespace std;
//斐波那契数列计算、有序地插入数据、删重、计算平均值、删除小于平均值的数
int main()
{
	cout << "2019113681周聪杰" << endl;
	const int N = 20;
	int a[N] = { 1,1 },n=10,j=0,i=0,x;//数组
	double avg = 0.0;

	//计算斐波那契数列
	for (int i = 0; i < n-2; i++)
		a[i + 2] = a[i + 1] + a[i];
	cout << "自动生成10个整数\n";
	for (int i = 0; i < n; i++)
		cout << setiosflags(ios::left) << setw(4) << a[i];

	//保持有序地插入数据
	cout << endl<<"输入待插入的数据：";
	cin >> x;
	for (i = 0; x >= a[i] && i < 10; i++)//查询要插入的位置下标
		j = i + 1;
	for (i = 9; i >= j; i--)//将后面的数往后挪一位
		a[i + 1] = a[i];
	a[j] = x;//插入数据
	n++;
	cout << "插入后数组序列为:\n";
	for (i = 0; i < n; i++)
		cout  << setw(4) << a[i];//控制数据域宽

	//删重
	for ( i = 0; i <= n; i++)//第一个循环控制被比较的对象
		for ( j = i + 1; j <= n; j++)//第二个循环控制需要比较的对象
			if (a[j] == a[i])//判断比较的对象和被比较的对象是否一样
			{
				for (int p = j; p <= n; p++)//若一样则删除比较的对象，从最后一个数开始向前赋值
					a[p] = a[p + 1];
				n--;//缩小数组长度
			}
	cout << "\n去重后数组序列为:\n";
	for (i = 0; i < n; i++)
		cout <<setw(4) << a[i];//控制数据域宽

	//求和、取平均数
	for (i = 0; i < n; i++)
		avg += a[i];
	avg /= (double)n;
	cout << "\n数组中所有元素平均值为：" << avg;

	//删除所有低于平均数的元素
	for (j = 0; j < n; j++)
		if (a[j] <avg)//判断是否小于平均数
		{
			for (int p = j; p <= n; p++)//若小于则删除，从最后一个数开始向前赋值
				a[p] = a[p + 1];
			n--;//缩小数组长度
			j--;//计数器减一，避免漏数据
		}
	cout << "\n数组中高于平均值的元素为：\n";
	for (i = 0; i < n; i++)
		cout << setw(4) << a[i];//控制数据域宽
	return 0;
}