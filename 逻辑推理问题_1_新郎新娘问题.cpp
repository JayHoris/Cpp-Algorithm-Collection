#include<iostream>
using namespace std;
//������������p106
//�߼����⣬�����������ⶼ��ö�ٷ����
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	char x, y, z;
	for ( x='A'; x <= 'C'; x++)
		for (y = 'A'; y <= 'C'; y++)
			for (z = 'A'; z <= 'C'; z++)
			{
				if (x != 'A' && x != 'C' && z != 'C' && x != y && y != z && x != z)
				{
					cout << "XҪ��" << x << "���" << endl;
					cout << "YҪ��" << y << "���" << endl;
					cout << "ZҪ��" << z << "���" << endl;
				}
			}
	return 0;
}