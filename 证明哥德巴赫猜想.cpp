#include<iostream>
#include<iomanip>
using namespace std;
//֤����°ͺղ��룬�κδ����ĵ�ż�����Էֽ�Ϊ���������ĺ�
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	bool prime(int);
	for (int i = 6; i <=50 ; i=i+2)
	{
		for (int j = 3; j <= i / 2; j++)
		{
			if (prime(j)&&prime(i-j))
			{
				cout <<setw(2)<< i << "=" << setw(2) << j << "+" << setw(2) << i - j << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}
bool prime(int j)
{
	bool f = 1;
	for (int i = 2; i <=sqrt((double)j); i++)
	{
		if (j % i == 0)
		{
			f = 0;
			break;
		}
	}
	return f;
}