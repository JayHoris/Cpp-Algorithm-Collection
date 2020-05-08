#include<iostream>
#include<iomanip>
using namespace std;
//有序数组中插入新元素
int main()
{
	cout << "2019113681周聪杰" << endl;
	const int N = 20;
	int a[N] = { 2,4,6,8,12,16,17,20,30,40 }, n, i, j=0;//默认插入的位置是0
	cout << "请输入你要插入的数：";
	cin >> n;
	for (i = 0; n >= a[i] && i < 10; i++)
		j = i + 1;
	for (i = 9; i >= j; i--)
		a[i + 1] = a[i];
	a[j] = n;
	for (int i = 0; i < 11; i++)
		cout << a[i] << "  ";
}
