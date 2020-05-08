#include<iostream>
using namespace std;
//折半查找，必须是有序的数据
int main()
{
	cout << "2019113681周聪杰" << endl;
	const int n = 10;
	int a[n] = { 0 }, top=0, bot=n-1, mid=(top+bot)/2, x;
	cout << "请输入你10个数据";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "你要查找的数据：";
	cin >> x;

	while (top <= bot)
		if (x == a[mid])	break;
		else
		{
			mid = (top + bot) / 2;//如果不是mid的数，则折半
			if (x < a[mid])
			{
				bot = mid - 1;//小于中间值则上限折半
			}
			else
			{
				top = mid + 1;//大于中间值则下限折半
			}
		}
	if (top <= bot)
		cout << x << "是第" << mid+1 << "个数";
	else
		cout << "查无此数";
	return 0;
}