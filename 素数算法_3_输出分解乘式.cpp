#include<iostream>
#include<cmath>
using namespace std;
//�ж��Ƿ�Ϊ����
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	int m, r, a;
	char Ans = 'y';
	do
	{
		m = r = 0;
		a = 1;
		cout << "������Ҫ�жϵ�����";
		cin >> m;
		for (int i = 2; i <= sqrt(m); i++)
		{
			if (m % i == 0)
			{
				a++;
				r = m / i;
				if (a == 1)
					cout << "��������,�ҿ���Ϊһ��������ˣ�";
				cout << i << "*" << m / i << "	";

			}
		}
		if (a == 0) 
			cout << "������";
		cout << endl << endl << endl;
	} while (a);
	return 0;
}

/*
#include<iostream>
#include<cmath>
using namespace std;
//�ж��Ƿ�Ϊ����
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	int m, r,a;
	char Ans='y';
	do
	{
		m = r = a = 0;
		cout << "������Ҫ�жϵ�����";
		cin >> m;
		for (int i = 2; i <= sqrt(m); i++)
		{
			if (m % i == 0)
			{
				a++;
				r = m / i;
				if (a == 1)
				{
					cout << "��������,�ҿ���Ϊһ��������ˣ�";
				}
				 cout << i << "*" << m / i << "	";

			}
		}
		if (a == 0) cout << "������";
		cout << endl<<endl << "�Ƿ������";
		cin >> Ans;
		cout << endl;
	} while (Ans == 'y' ||Ans== 'Y');
	return 0;
}*/