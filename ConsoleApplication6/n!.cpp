#include "stdafx.h"
#include "iostream"
using namespace std;

int abc(int m)
{
	if (m = 1)
		return 1;
	else
		return	m * abc(m - 1);
}

int main()
{
	int sum = 0, n;
	cout << "请输入你想计算的n：";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		sum += abc(i);
	}

	return 0;
}