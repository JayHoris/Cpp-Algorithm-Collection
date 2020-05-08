#include<iostream>
using namespace std;
//查找最大值及位置
int main()
{
	cout << "2019113681周聪杰" << endl;

	const int N = 20;
	int a[N] = { 0,0 }, max, min, j,n,m;
	cout << "请输入数组长度：";
	cin >> n;
	j =m= 0, max = min = a[0];
	for (int i = 0; i < n; i++)
	{
		cout << "请输入第" << i+1 << "个数：";
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i]>max)
		{
			j = i;
			max = a[i];
		}//查找最大的数并记录下标
		if (a[i] < min)
		{
			m= i;
			min = a[i];
		}//查找最小的数并记录下标
	}
	cout << "第" << j + 1 << "个数最大，值是：" << max<<endl
		<< "第" << m + 1 << "个数最小，值是：" << min;
	return 0;
}