#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
using namespace std;
//�������10������ð�ݽ��������۰����
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	const int N = 20;//���鳤��
	int a[N] = { 0 };//�������鲢��ʼ��
	int n = 10,x,top,bot,mid;//��¼ʵ�����ݳ��ȣ���Ҫ���ҵ���
	srand(time(NULL));

	//�����������
	cout << "10��10��100����������Ϊ��"<<endl;
	for (int i = 0; i < 10; i++)//��������
	{
		a[i]=10+rand()%91;
		cout << setiosflags(ios::left) << setw(4) << a[i];
	}

	//ð�ݽ�������
	for (int i = 0; i < n - 1; i++)//��n����������ֻ��Ҫn-1��
		for (int j = 0; j < n - i - 1; j++)//�Ե�i������ֻ��Ҫ�Ƚ�n-i-1��
			if (a[j] > a[j + 1])
			{
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
	//���
	cout << endl<<"���Ӵ�С���еĽ����"<<endl;
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];

	//�۰����
	top = 0, bot = n - 1, mid = (top + bot) / 2;
	cout << endl<<"��Ҫ���ҵ����ݣ�";
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
		cout << x << "�ڵ�" << mid + 1 << "��λ��";
	else
		cout << "���޴���";
	return 0;
}