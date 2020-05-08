#include<iostream>
using namespace std;
//计算1!+2!+……+n!
int main()
{
	cout << "2019113681周聪杰" << endl;
	int sum=0, n,t=1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		sum =sum+t;//这一步其实有点小巧妙
	}
	cout << sum;
	return 0;
}