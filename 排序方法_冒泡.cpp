#include<iostream>
using namespace std;
//ð������
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	const int N = 20;
	int a[N] = { 0 } ,n=1;
	cout << "��������Ҫ������������";
	cin >> n;
	cout << "������������ݣ�";
	for (int i = 0; i <n; i++)
		cin >> a[i];
	for (int i = 0; i < n-1; i++)//��n����������ֻ��Ҫn-1��
		for (int j = 0; j <n-i-1; j++)//�Ե�i������ֻ��Ҫ�Ƚ�n-i-1��
			if (a[j]<a[j+1])
			{
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
	for (int i = 0; i < n; i++)
		cout<< a[i] << "  ";
	return 0;
}