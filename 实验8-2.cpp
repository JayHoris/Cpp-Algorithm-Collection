#include<iostream>
#include<iomanip>
using namespace std;
//
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	const int N = 20;//���鳤��
	int a[N] = { 0 }, b[N] = {0}, n=10, max, min, max_i, min_i;
		//�������鲢��ʼ��,��¼ʵ�����ݳ��ȣ����ֵ��Сֵ��������
	int i, j;//������
	bool prime(int);//�����ж������ĺ���
	cout << "������10����������";
	//��������
	for ( i = 0; i < n; i++)
		cin >> a[i];

	//���������Сֵ�����±�
	max = min = a[0];
	max_i = min_i = 0;
	for ( i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max_i = i;
			max = a[i];
		}//��������������¼�±�
		if (a[i] < min)
		{
			min_i = i;
			min = a[i];
		}//������С��������¼�±�
	}
	cout << "a���������ֵ�ǣ�" << endl << max << ",���±�Ϊ��" << max_i << endl
		<< "a��������Сֵ�ǣ�" << endl << min << ",���±�Ϊ��" << min_i;

	for (i = 0,j=0; i < n; i++)
	{
		if (prime(a[i]))//�ж��Ƿ�Ϊ����
		{
			b[j] = a[i];//�����򴢴��b����
			j++;//b���±�+1
		}
	}

	cout <<endl<< "�������b������Ϊ��" << endl;
	for (i = j-1; i >=0; i--)
		cout<< setw(10) << b[i];
	return 0;
}

//�ж��Ƿ�Ϊ����
bool prime(int j)
{
	bool f = 1;//Ĭ��������
	for (int i = 2; i <= sqrt((double)j); i++)
	{
		if (j % i == 0)
		{
			f = 0;//��������
			break;
		}
	}
	return f;
}