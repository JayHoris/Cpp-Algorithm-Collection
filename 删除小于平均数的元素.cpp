#include<iostream>
using namespace std;
//删除小于平均数的元素
int main()
{
	cout << "2019113681周聪杰" << endl;
	const int N = 20;
	int a[N] = { 1,5,4,6,11,42,15,14,12 },n=9;
	double avg;
	for (int i = 0; i < n; i++)
	{
		a[N-1] = a[N-1] + a[i];//用最后一个元素储存和
	}
	avg = a[N-1]/(double)n;//平均数
	for (int i = 0; i < n; i++)
	{
		if (a[i]<avg)
		{
			for (int p = i; p < n; p++)//如果小于平均数则将后面的数填充到前一位，实现删除
				a[p] = a[p+1];
			n--;//缩小有效数组长度
			i--;//现在后面的数向前移动了一位，i不应该自加，于是先减，防止漏掉数据
		}
	}
	for (int i = 0; i < n; i++)
		cout << "  " << a[i];
	return 0;
}