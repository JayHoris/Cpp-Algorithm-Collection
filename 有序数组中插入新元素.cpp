#include<iostream>
#include<iomanip>
using namespace std;
//���������в�����Ԫ��
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	const int N = 20;
	int a[N] = { 2,4,6,8,12,16,17,20,30,40 }, n, i, j=0;//Ĭ�ϲ����λ����0
	cout << "��������Ҫ���������";
	cin >> n;
	for (i = 0; n >= a[i] && i < 10; i++)
		j = i + 1;
	for (i = 9; i >= j; i--)
		a[i + 1] = a[i];
	a[j] = n;
	for (int i = 0; i < 11; i++)
		cout << a[i] << "  ";
}
