#include<iostream>
using namespace std;
//�۰���ң����������������
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	const int n = 10;
	int a[n] = { 0 }, top=0, bot=n-1, mid=(top+bot)/2, x;
	cout << "��������10������";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "��Ҫ���ҵ����ݣ�";
	cin >> x;

	while (top <= bot)
		if (x == a[mid])	break;
		else
		{
			mid = (top + bot) / 2;//�������mid���������۰�
			if (x < a[mid])
			{
				bot = mid - 1;//С���м�ֵ�������۰�
			}
			else
			{
				top = mid + 1;//�����м�ֵ�������۰�
			}
		}
	if (top <= bot)
		cout << x << "�ǵ�" << mid+1 << "����";
	else
		cout << "���޴���";
	return 0;
}