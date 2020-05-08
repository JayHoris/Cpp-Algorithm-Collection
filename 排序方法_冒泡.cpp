#include<iostream>
using namespace std;
//冒泡排序
int main()
{
	cout << "2019113681周聪杰" << endl;
	const int N = 20;
	int a[N] = { 0 } ,n=1;
	cout << "请输入你要的数据数量：";
	cin >> n;
	cout << "请输入你的数据：";
	for (int i = 0; i <n; i++)
		cin >> a[i];
	for (int i = 0; i < n-1; i++)//对n个数组排序只需要n-1轮
		for (int j = 0; j <n-i-1; j++)//对第i轮排序，只需要比较n-i-1次
			if (a[j]<a[j+1])
			{
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
	for (int i = 0; i < n; i++)
		cout<< a[i] << "  ";
	return 0;
}