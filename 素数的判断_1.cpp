#include<iostream>
using namespace std;
//�ж�����
int main()
{
	cout << "2019113681�ܴϽ�" << endl;
	int i, n;
	cin >> n;
	for (i = 2; i <= n; i++)
		if (n % i == 0) break;
	if (i<=sqrt(n))
		cout << n<<	"��������";
	else
		cout << n << "������";


	//����2

	bool f = 1;
	for ( i = 0; i <=sqrt((double)n) ; i++)
	{
		if (n % i == 0)
		{
			f = 0;
			break;
		}
	}
	return 0;
}