#include<iostream>
#include<cstdlib>
using namespace std;
//���λ���Ĳ�����Ϸ����������С��ʾ
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	int num, gess;
	num = 1 + rand() % 100;
	for (int i = 0; i < 3; i++)
	{
		cout << "�����������1~100��";
		cin >> gess;
		if (gess == num)
		{
			cout << "��ϲ���н��ˣ�";
			break;
		}
		gess > num ? cout << "��ֵ����\n" : cout << "��ֵС��\n";
		if (i == 2)
		{
			cout <<"��������"<<num<<endl<< "лл���롣";
		}
	}

	return 0;
}