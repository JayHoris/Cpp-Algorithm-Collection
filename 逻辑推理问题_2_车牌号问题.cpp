#include<iostream>
using namespace std;
//车牌号问题p108
int main()
{
	cout << "2019113681周聪杰" << endl;
	for (int num = 32;  pow((double)num,2) <= 9999;  num++)
	{
		int a = int(pow(num, 2));
		if (a / 100 != a % 100 && a / 1000 == a / 100 % 10 && a / 10 % 10 == a % 10)//依次是前两位与后两位不同，前两位相同，后两位相同
			cout << a;
	}
	return 0;
}