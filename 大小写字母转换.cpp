#include<iostream>
using namespace std;
//��Сд��ĸת��Ϊ��д��ĸ����������ǵ�ASCII�뼰��ԭ�ַ�
int main()
{
	cout << "2019113681�ܴϽ�" << endl;				//���ѧ������
	char a = 0;
	cout << "������һ��Сд��ĸ��";
	cin >> a;
	cout << "�����Сд��ĸ�ǣ�" << a << ",    ��ASCII���ǣ�" << (int)a << endl;
	//�����һ�У�ǿ������ת�����ASCII��
	a -= 32;//��д��ĸ��Сд��ĸС32��ע��A��ASCII����65
	cout << "���ڵĴ�д��ĸ�ǣ�" << a << ",    ��ASCII���ǣ�" << (int)a;
	//����ڶ��У�ǿ������ת�����ASCII��
	return 0;
}