#include<iostream>
#include<cmath>
using namespace std;
//�ж��Ƿ�Ϊ�������ҳ��׷ֽ�������
int m, r, i, a, b;
char Ans = 'y';
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	int ZhiShu(int r);//���������ж������ĺ���
	do
	{
		m = r = i = a = b = 0;
		/*m�����������
		a��b������ѭ���������ֻ���һ�䡰��/������"
		i���ڿ��������жϵĵ���
		*/
		cout << "������Ҫ�жϵ�����";
		cin >> m;
		r = m;
		for (;;)
		{
			i = 2;
			r = ZhiShu(r);//���ú���
			if (i <= sqrt(r))
			{
				if (b == 0)	cout << "��������,�������������ֽ�����:" << m << "=";
				r = r / i;
				cout << i << "*";	//ÿ��ѭ���е�һ�����������ĳ���һ��������
				a++, b++;
			}
			else
			{
				if (a == 0)
				{
					cout << "������";//�˳������whlieѭ�������aû���ԼӵĻ���˵��n������
					break;
				}
				else
				{
					cout << r << " ";//������һ��������
					break;
				}
			}
		}
		cout << endl << endl << "�Ƿ������";
		cin >> Ans;
		cout << endl;
	} while (Ans == 'y' || Ans == 'Y');
	return 0;
}
int ZhiShu(int r)
{
	while (i <= sqrt(r))
	{
		if (r % i == 0) break;
		else i++;
	}
	return i;
}
/*
#include<iostream>
#include<cmath>
using namespace std;
//�ж��Ƿ�Ϊ�������ҳ��׷ֽ�������
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	int m, r,a,i,b,c;
	char Ans = 'y';
	do
	{
		m =r=i=b=c= 0;
		//�����������
		//a�������������ж�һֱѭ����
		//b��c������ѭ���������ֻ���һ�䡰��/����������������кܶ���Ƿ�Ϊ������
		//i���ڿ��������жϵĵ���

a = 1;
cout << "������Ҫ�жϵ�����";
cin >> m;
r = m;
do
{
	i = 2;
	while (i <= sqrt(r))
	{
		if (r % i == 0) break;
		else i++;
	}
	if (i <= sqrt(r))
	{
		if (c == 0)	cout << "��������,�������������ֽ�����:";
		r = r / i;
		cout << i << "*";
		b++;
		c++;
	}
	else
	{
		if (b == 0)
		{
			cout << "������";
			break;
		}
		else
		{
			cout << r << " ";
			break;
		}
	}
} while (a == 1);
cout << endl << endl << "�Ƿ������";
cin >> Ans;
cout << endl;
	} while (Ans == 'y' || Ans == 'Y');
	return 0;
}
*/