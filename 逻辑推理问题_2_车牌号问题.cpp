#include<iostream>
using namespace std;
//���ƺ�����p108
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	for (int num = 32;  pow((double)num,2) <= 9999;  num++)
	{
		int a = int(pow(num, 2));
		if (a / 100 != a % 100 && a / 1000 == a / 100 % 10 && a / 10 % 10 == a % 10)//������ǰ��λ�����λ��ͬ��ǰ��λ��ͬ������λ��ͬ
			cout << a;
	}
	return 0;
}