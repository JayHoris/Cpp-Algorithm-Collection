#include<iostream>
using namespace std;
//ʮ���ư˽���ת��_���ַ���_�ڶ��ַ����߽ݾ�����һ����ȡ
int n=0, r, w = 1, w1, c, T;
double result = 0;
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	int method_1(int n);
	int method_2(int n);
	result = method_1(n);
	cout << "����һת����Ľ��Ϊ��" << result<<endl;
	result = method_2(n);
	return 0;
}
int method_1(int n)
{

	cout << "��������Ҫת���ķ�ʽ��1����תʮ��2��ʮת��\n";
	cin >> T;
	switch (T)
	{
	case 1:c = 10; w1 = 8; break;
	case 2:c = 8; w1 = 10; break;
	default:cout << "��������ȷ��ת����ʽ��"; break;
		//����λȨ��ȷ��ת����λȨ����ȡ�෨ȷ��Ҫȡ�ĳ���
	}
	cout << "����������Ҫ" << w1 << "ת" << c << "������";
	cin >> n;
	do
	{
		r = n % c;
		result += (double)r * w;
		w = w * w1;
		n = n / c;		//λȨ��ת����ȡ�෨ת��
	} while (n != 0);
	return result;
}

int method_2(int n)
{
	int a, x;
	cout << "��������Ҫת���ķ�ʽ��1����תʮ��2��ʮת��\n";
	cin >> a;
	switch (a)
	{
	case 1:cout << "������˽�������";
		cin >>oct>> x;//��һ���ܹؼ���ͨ��octȷ���������Ϊ�˽���
		cout << "������ת����Ľ��Ϊ��" << dec << x;
		break;	//���ÿ��Ʒ�doc��octת���˽��ƺ�ʮ����
	case 2:cout << "������ʮ��������";
		cin  >> x;
		cout << "������ת����Ľ��Ϊ��" << oct << x;
		break;
	default:cout << "��������ȷ�ķ�ʽ��"; break;
	}
	return x;
}
