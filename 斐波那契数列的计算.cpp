#include<iostream>
#include<iomanip>
using namespace std;
//斐波那契数列计算
int main()
{
	cout << "2019113681周聪杰" << endl;
	int f[20] = { 1,1 };
	for (int i = 0; i < 18; i++)
		f[i + 2] = f[i + 1] + f[i];
//	cout << setiosflags(ios::left);
	for (int i = 0; i < 20; i++)
	{
		if (i % 5 == 0) cout << endl;//每行输出五个数
		cout << setw(5) << f[i];
	}
	return 0;
}