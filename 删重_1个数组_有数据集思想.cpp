#include<iostream>
using namespace std;
//只需要一个数组实现删重，利用数据集的思想
int main()
{
	cout << "2019113681周聪杰" << endl;
	const int N = 20;
	int a[N] = { 1,2,1,7,3,4,3,5,2,7 }, pos=1, n = 10;
	for (int i = 1; i < 10; i++)//第i个数据
		for (int j = 0; j < pos; j++)//数据集内第j个数据
		{
			if (a[i]==a[j])	break;//判断若第i个数据与数据集内的第j数据相同，则判断第j+1个数据
			if (j==pos-1)//直到判断完所有数据集内的数据都不相同，说明第i个数据为新数据
			{
				a[pos] = a[i];//则将第i个数据存入数据集
				pos++;//数据集长度+1
			}
		}
	for (int i = 0; i < pos; i++)
		cout << "  " << a[i];
	return 0;
}