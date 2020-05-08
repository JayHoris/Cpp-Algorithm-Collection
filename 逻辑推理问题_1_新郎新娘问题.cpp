#include<iostream>
using namespace std;
//新郎新娘问题p106
//逻辑问题，不定方程问题都靠枚举法求解
int main()
{
	cout << "2019113681周聪杰" << endl;
	char x, y, z;
	for ( x='A'; x <= 'C'; x++)
		for (y = 'A'; y <= 'C'; y++)
			for (z = 'A'; z <= 'C'; z++)
			{
				if (x != 'A' && x != 'C' && z != 'C' && x != y && y != z && x != z)
				{
					cout << "X要和" << x << "结婚" << endl;
					cout << "Y要和" << y << "结婚" << endl;
					cout << "Z要和" << z << "结婚" << endl;
				}
			}
	return 0;
}