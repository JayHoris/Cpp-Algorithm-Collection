#include<iostream>
using namespace std;
//��������switch�ṹ_1_����ʴ��۸�_ʵ��4-4
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
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