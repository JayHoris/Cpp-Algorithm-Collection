#include<iostream>
using namespace std;
int main()
{
	const int N = 10;
	int a[N] = {1,2,3,5,4,1,3,2,4,6};
	int n = 10;
	for (int i = 0; i <= n; i++)//��һ��ѭ�����Ʊ��ȽϵĶ���
		for (int j = i+1; j <= n; j++)//�ڶ���ѭ��������Ҫ�ȽϵĶ���
			if (a[j] == a[i])//�жϱȽϵĶ���ͱ��ȽϵĶ����Ƿ�һ��
			{
				for (int  p = j; p <= n; p++)//��һ����ɾ���ȽϵĶ��󣬴����һ������ʼ��ǰ��ֵ
					a[p] = a[p + 1];
				n--;//��С���鳤��
			}
	for (int i = 0; i < n; i++)
		cout <<"  "<< a[i];
	return 0;
}