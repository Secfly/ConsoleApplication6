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
	//第一个版本，Switch用法
	/*switch (grade>=90)
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
	}*/
	//第二个版本，if用法
	if (grade >= 90)
		cout << "A Grade";
	else
		if (grade >= 80)
			cout << "B Grade";
		else
			if (grade >= 70)
				cout << "C Grade";
			else 
				if (grade >= 60)
					cout << "D Grade";
				else cout << "No Pass";
	
	return 0;
}

