//������ƽ�����ķ���ǰ��(��ͬ����ʦ�Ĵ��룬�����������)
#include<iostream>
using namespace std;
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	const int N = 20;
	double a[N] = { 13.5,20,11,67,3.3,41.2,3,5.2,29 },n=9;
	int i = 0, j = n - 1;
	for (int i = 0; i < n; i++) a[N - 1] += a[i];//�����
	a[N - 1] /= n;//����ƽ����
	for (i = 0; i <j; i++)
		if (a[i] < a[N - 1])//�жϵ�i�����Ƿ�С��ƽ����
			for (; j > i; j--)//��С�ڣ���Ӻ���ǰ��
				if (a[j] > a[N - 1])//�ҵ�����ƽ�������������߽���
				{
					a[N - 2]= a[j];
					a[j] = a[i];
					a[i] = a[N - 2];
					break;//��������������ѭ����������j�ύ��ͬһ��i
				}
					
	for (i = 0; i < n; i++)
		cout << "  " << a[i];
	return 0;
}