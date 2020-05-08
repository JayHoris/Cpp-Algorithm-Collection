#include<iostream>
using namespace std;
int main()
{
	const int N = 10;
	int a[N] = {1,2,3,5,4,1,3,2,4,6};
	int n = 10;
	for (int i = 0; i <= n; i++)//第一个循环控制被比较的对象
		for (int j = i+1; j <= n; j++)//第二个循环控制需要比较的对象
			if (a[j] == a[i])//判断比较的对象和被比较的对象是否一样
			{
				for (int  p = j; p <= n; p++)//若一样则删除比较的对象，从最后一个数开始向前赋值
					a[p] = a[p + 1];
				n--;//缩小数组长度
			}
	for (int i = 0; i < n; i++)
		cout <<"  "<< a[i];
	return 0;
}