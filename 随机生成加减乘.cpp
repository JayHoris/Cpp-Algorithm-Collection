#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//1`10�Ӽ�������ѵ��ϵͳ
int x, y, a, answer, result;
//x,yΪ�������a������������������answer���û���������result����ʵ���
char yunSuanFu;//���ڴ��������
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	int add(int x, int y);
	int sub(int x, int y);
	int mul(int x, int y);
	srand(time(NULL));//����ϵͳʱ�����ɲ��ظ��������
	x = 1 + rand() % 10;
	y = 1 + rand() % 10;
	a = rand() % 3;
	//�������������
	switch (a)
	{
	case 1:yunSuanFu = '+'; result = add(x, y); break;
	case 2:yunSuanFu = '-'; result = sub(x, y); break;
	case 0:yunSuanFu = '*'; result = mul(x, y); break;
	}
	//���������a��ֵ��������������������ͬʱ���ö�Ӧ������ĺ���
	cout << "�����" << x << yunSuanFu << y << "=";
	cin >> answer;
	if (answer == result)
		cout << "����׼ȷ��";
	else
		cout << "�������" << x << yunSuanFu << y << "=" << result;
	return 0;
}
int add(int x, int y)//�ӷ�����
{
	return(x + y);
}
int	sub(int x, int y)//��������
{
	return(x - y);
}
int mul(int x, int y)//�˷�����
{
	return(x * y);
}