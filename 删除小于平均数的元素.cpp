#include<iostream>
using namespace std;
//ɾ��С��ƽ������Ԫ��
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	const int N = 20;
	int a[N] = { 1,5,4,6,11,42,15,14,12 },n=9;
	double avg;
	for (int i = 0; i < n; i++)
	{
		a[N-1] = a[N-1] + a[i];//�����һ��Ԫ�ش����
	}
	avg = a[N-1]/(double)n;//ƽ����
	for (int i = 0; i < n; i++)
	{
		if (a[i]<avg)
		{
			for (int p = i; p < n; p++)//���С��ƽ�����򽫺��������䵽ǰһλ��ʵ��ɾ��
				a[p] = a[p+1];
			n--;//��С��Ч���鳤��
			i--;//���ں��������ǰ�ƶ���һλ��i��Ӧ���Լӣ������ȼ�����ֹ©������
		}
	}
	for (int i = 0; i < n; i++)
		cout << "  " << a[i];
	return 0;
}