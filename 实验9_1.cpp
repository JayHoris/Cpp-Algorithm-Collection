#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
using namespace std;
//随机生成10个数，冒泡降序排序，折半查找
int main()
{
	cout << "2019113681周聪杰" << endl;
	const int N = 20;//数组长度
	int a[N] = { 0 };//定义数组并初始化
	int n = 10,x,top,bot,mid;//记录实际数据长度，需要查找的数
	srand(time(NULL));

	//随机生成整数
	cout << "10个10到100间的随机整数为："<<endl;
	for (int i = 0; i < 10; i++)//输入数据
	{
		a[i]=10+rand()%91;
		cout << setiosflags(ios::left) << setw(4) << a[i];
	}

	//冒泡降序排序
	for (int i = 0; i < n - 1; i++)//对n个数组排序只需要n-1轮
		for (int j = 0; j < n - i - 1; j++)//对第i轮排序，只需要比较n-i-1次
			if (a[j] > a[j + 1])
			{
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
	//输出
	cout << endl<<"将从大到小排列的结果："<<endl;
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];

	//折半查找
	top = 0, bot = n - 1, mid = (top + bot) / 2;
	cout << endl<<"你要查找的数据：";
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
		cout << x << "在第" << mid + 1 << "个位置";
	else
		cout << "查无此数";
	return 0;
}