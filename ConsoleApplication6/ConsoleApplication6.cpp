// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
using namespace std;

int main()
{
	int grade;
	cout << "请输入您的成绩：";
	cin >> grade;
	switch (grade>=90)
	{
		case 1:
			cout << "A Grade"; break;
		case 0:
			switch (grade>=80)
			{
				case 1:
					cout << "B Grade"; break;
				case 0:
					switch (grade>=70)
					{
						case 1:
							cout << "C Grade"; break;
						case 0:
							switch (grade>=60)
							{
								case 1:
									cout << "D Grade"; break;
								case 0:
									cout << "No Pass"; break;
							}
					}
			}
	}
	return 0;
}

