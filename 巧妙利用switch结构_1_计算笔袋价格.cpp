#include<iostream>
using namespace std;
//巧妙利用switch结构_1_计算笔袋价格_实验4-4
int main()
{
	cout << "2019113681周聪杰" << endl;
	int num, c,price;
	cin >> num;
	c = num / 50;
	switch (c)
	{
	case 0:price = 38; break;
	case 1:price = 35; break;
	case 2:
	case 3:price = 32; break;
	case 4:
	case 5:price = 30; break;
	default:price = 28;break;
	}
	int total;
	total = num * price;
	cout << total;
	return 0;
}