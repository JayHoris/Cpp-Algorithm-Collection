#include<iostream>
using namespace std;
//����1-1/2+3/1-1/4����-1/100
int main()
{ 
	cout << "2019113681�ܴϽ�" << endl;
	int sign=1;
	double term, sum = 0;
	for (int i = 1; i <=100; i++)
	{
		term = 1.0 / (double)i;//ע��ǿ������ת��
		sum += sign * term;//ע�⣡������ֵ�������ţ���ͲŴ����ţ�����������ϰ��
		sign *= -1;
	}
	cout << sum;
	return 0;
}