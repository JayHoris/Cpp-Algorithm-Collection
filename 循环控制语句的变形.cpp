#include<iostream>
using namespace std;
//ѭ���������ı���
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	int a = 3;
	while (a--)
	{
		cout << "ya=" << a << endl;
	}
	cout << "a=" << a<<endl << endl << endl;

	 a = 3;
	while (a--,a)//�ж����һ��������ֵ
	{
		cout << "ya=" << a << endl;
	}
	cout << "a=" << a;
	return 0;
}