#include<iostream>
#include<iomanip>//��ʽ���������Ϊset��ͷ��cout��ͷ�ģ�����set��ͷ����䶼��Ҫiomanip
#include<string>
using namespace std;
//��ʽ����ɼ���_ʵ��2-1
void main()
{
	cout << "2019113681�ܴϽ�" << endl;         //���ѧ������
	double a, b, c, aver;
	string name, num;							//��������
	cout << "������ѧ�ź�������";
	cin >> num >> name;
	cout << "���������ſγɼ���";
	cin >> a>>b>>c;							//���������Ϣ
	cout << fixed;
	cout.precision(2);							//�����������
	aver = (a + b + c) / 3;
	//setw(n)Ĭ���Ҷ��룬�ʲ���setioflags(ios::right)
	cout << setw(13) << "ѧ��" << setw(12) << "����" << setw(12) << "�ߵ���ѧ" << setw(12) << "��ͨ����" << setw(12) << "��ѧӢ��" << endl
		<< setw(13) << num << setw(12) << name << setw(12) << a << setw(12) << b << setw(12) << b << endl;
	//��ʽ���
	//һ�������ַ������ʱռ�������
	cout << "��ͬѧ�����ſγ�ƽ���ɼ�Ϊ��" << aver;
}