#include<iostream>
using namespace std;
//判断素数
int main()
{
	cout << "2019113681周聪杰" << endl;
	int i, n;
	cin >> n;
	for (i = 2; i <= n; i++)
		if (n % i == 0) break;
	if (i<=sqrt(n))
		cout << n<<	"不是素数";
	else
		cout << n << "是素数";


	//方法2

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