#include<iostream>
using namespace std;
//求sin x的近似值_实验5-4
int main()
{
	cout << "2019113681周聪杰" << endl;
	const double pi = 3.14;
	double value, x, y, tongXiang, sign, n;
	cout << "请输入角度值:";
	cin >> x;
	y = x * pi / 180;		//	弧度制转换
	value = tongXiang = y;
	for (sign = -1, n = 1; tongXiang >= 0.0001; sign *= -1, n++)
	{
		tongXiang = tongXiang * y * y / ((2 * n) * (2 * n + 1));
		//计算每一个通项的值，同时参与判断精度
		value = value + tongXiang * sign;			//！！！求通项，带符号分开计算
	}
	printf_s("sin(%.0f)近似值为：%f", x, value);
	return 0;
}