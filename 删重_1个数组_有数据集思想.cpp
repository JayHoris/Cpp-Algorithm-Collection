#include<iostream>
using namespace std;
//ֻ��Ҫһ������ʵ��ɾ�أ��������ݼ���˼��
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	const int N = 20;
	int a[N] = { 1,2,1,7,3,4,3,5,2,7 }, pos=1, n = 10;
	for (int i = 1; i < 10; i++)//��i������
		for (int j = 0; j < pos; j++)//���ݼ��ڵ�j������
		{
			if (a[i]==a[j])	break;//�ж�����i�����������ݼ��ڵĵ�j������ͬ�����жϵ�j+1������
			if (j==pos-1)//ֱ���ж����������ݼ��ڵ����ݶ�����ͬ��˵����i������Ϊ������
			{
				a[pos] = a[i];//�򽫵�i�����ݴ������ݼ�
				pos++;//���ݼ�����+1
			}
		}
	for (int i = 0; i < pos; i++)
		cout << "  " << a[i];
	return 0;
}