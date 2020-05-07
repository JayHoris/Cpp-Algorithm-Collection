#include<iostream>
using namespace std;
//比较xy的大小，并交换顺序
int x, y;
int main()
{
	cout << "2019113681周聪杰" << endl;
	int method_1(int x, int y);
	int method_2(int x, int y);
	int method_3(int x, int y);
	cin >> x >> y;

	return 0;
}
int method_1(int x, int y)
{
	int temp;
	x > y ? x : temp = y, x = y,y=temp;
}
int method_2(int x, int y)
{
	x > y ? x : x = x + y, y = x - y, x = x - y;
}
int method_3(int x, int y)
{
	x > y ? x : x = x * y; y = (double)x / y; x = (double)x / y;
}