#include<iostream>
using namespace std;
//��sin x�Ľ���ֵ_ʵ��5-4
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	const double pi = 3.14;
	double value, x, y, tongXiang, sign, n;
	cout << "������Ƕ�ֵ:";
	cin >> x;
	y = x * pi / 180;		//	������ת��
	value = tongXiang = y;
	for (sign = -1, n = 1; tongXiang >= 0.0001; sign *= -1, n++)
	{
		tongXiang = tongXiang * y * y / ((2 * n) * (2 * n + 1));
		//����ÿһ��ͨ���ֵ��ͬʱ�����жϾ���
		value = value + tongXiang * sign;			//��������ͨ������ŷֿ�����
	}
	printf_s("sin(%.0f)����ֵΪ��%f", x, value);
	return 0;
}