#include<iostream>
using namespace std;
//����1!+2!+����+n!
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	int sum=0, n,t=1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		sum =sum+t;//��һ����ʵ�е�С����
	}
	cout << sum;
	return 0;
}