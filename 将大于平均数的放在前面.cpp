//将大于平均数的放在前面(不同于老师的代码，更加容易理解)
#include<iostream>
using namespace std;
int main()
{
	cout << "2019113681周聪杰" << endl;
	const int N = 20;
	double a[N] = { 13.5,20,11,67,3.3,41.2,3,5.2,29 },n=9;
	int i = 0, j = n - 1;
	for (int i = 0; i < n; i++) a[N - 1] += a[i];//储存和
	a[N - 1] /= n;//储存平均数
	for (i = 0; i <j; i++)
		if (a[i] < a[N - 1])//判断第i个数是否小于平均数
			for (; j > i; j--)//若小于，则从后往前找
				if (a[j] > a[N - 1])//找到大于平均数的数，二者交换
				{
					a[N - 2]= a[j];
					a[j] = a[i];
					a[i] = a[N - 2];
					break;//交换完后进行跳出循环，否则多个j会交换同一个i
				}
					
	for (i = 0; i < n; i++)
		cout << "  " << a[i];
	return 0;
}