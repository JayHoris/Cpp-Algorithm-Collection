#include<iostream>
using namespace std;
//�ɼ����Ĳ�ȭ_�����¿κ�ʵ��p4
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	void result(int s);//���������ж�ʤ���ĺ���
	char A;
	do
	{
		int a, b, s;
		cout << "**********��һ��**********" << endl
			<< "\t1.������\n"
			<< "\t2.��ʯͷ\n"
			<< "\t3.����\n"
			<< "***************************" << endl
			<< "��������ҵĲ�ȭ���룺\n";
		cin >> a >> b;
		s = a * 10 + b;	//������s���洢���ҵĲ�ȭ�������һ�����������򻯴���
		if (a == b)
			cout << "ƽ��";//�ж϶������ʱ�����ƽ��
		else
			result(s);//���ú���
		cout << endl << "�Ƿ��������?:Y/N" << endl;
		cin >> A;
	} while (A == 'Y' || A == 'y');//�ж��Ƿ������һ��
	if (A == 'N' || A == 'n') cout << "��������";
	return 0;
}
void result(int s)
//�ж�ʤ���ĺ���
{
	switch (s)
	{
	case 12:cout << "��Ӯ��ʯͷʤ����"; break;
	case 13:cout << "��Ӯ������ʤ��"; break;
	case 21:cout << "��Ӯ��ʯͷʤ����"; break;
	case 23:cout << "��Ӯ����ʤʯͷ"; break;
	case 31:cout << "��Ӯ������ʤ��"; break;
	case 32:cout << "��Ӯ����ʤʯͷ"; break;		//��switchѡ��������
	default: cout << "�����г���һ���ڹ���"; break;
	}
}