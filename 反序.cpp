#include<iostream>
using namespace std;
//����һ����������ת�����
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	int n, r, m;
	cout << "���������������";
	cin >> n;
	do
	{
		m = n % 10;				//������ұߵ���
		cout << m;
		n = n / 10;				//ȥ�����ұߵ���
	} while (n != 0);

	cout << endl << endl << endl;
	//������
		cout << "2019113681�ܴϽ�" << endl;
		cout << "���������������";
		cin >> n;
		r = n % 10;
		m = r;					//Ԥ����һ��
		while (n >=10)
		{
			n = n / 10;			//ȥ�����ұߵ�һ����
			r = n % 10;			//�����ұߵ���
			m = m * 10 + r;		//�������
		}
		cout << m;

	//������(��������������ҪϸƷ)
		cout << "���������������";
		cin >> n;
		m = 0;
		while (n != 0)
		{
			r = n % 10;
			m = m * 10 + r;
			n / 10;//ȥ���Ѿ�����������֣�Ϊ��һ�δ�����׼��
		}
		cout << m;
		return 0;
}