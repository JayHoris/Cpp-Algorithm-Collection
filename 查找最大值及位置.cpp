#include<iostream>
using namespace std;
//�������ֵ��λ��
int main()
{
	cout << "2019113681�ܴϽ�" << endl;

	const int N = 20;
	int a[N] = { 0,0 }, max, min, j,n,m;
	cout << "���������鳤�ȣ�";
	cin >> n;
	j =m= 0, max = min = a[0];
	for (int i = 0; i < n; i++)
	{
		cout << "�������" << i+1 << "������";
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i]>max)
		{
			j = i;
			max = a[i];
		}//��������������¼�±�
		if (a[i] < min)
		{
			m= i;
			min = a[i];
		}//������С��������¼�±�
	}
	cout << "��" << j + 1 << "�������ֵ�ǣ�" << max<<endl
		<< "��" << m + 1 << "������С��ֵ�ǣ�" << min;
	return 0;
}