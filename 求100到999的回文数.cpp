#include<iostream>
#include<iomanip>
using namespace std;
//���ַ��������
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	int n, m, num = 0, r;
	cout << "Enter the number:";
	cin >> n; 
	m = n; 
	while (n != 0)//����ȡ����λ���ֵķ�����һ�����ķ�����
	{     
		r=n%10;          //ȡ�����ұߵ�����
		num=num*10+r;    // �Ը��������ƣ���������
		n/=10;/*ȥ���Ѿ�����������ұߵ����֣�Ϊ��ȡ��һ��������׼��*/
	}
	if(num==m)
		cout <<"����"<<m<<"�ǻ���"<<endl;
	else
		cout <<"����"<<m<<"���ǻ���"<<endl;


	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int  j = 0; j < 10; j++)
		{
			n = i * 100 + j * 10 + i;
			cout << setw(6) << n;
			if (++count % 5 == 0)	cout << endl;//����������Ҫ
		}
	}
	return 0;
}