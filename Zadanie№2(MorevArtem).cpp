// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float a=4.8, b=-7.9, c, d,n,m;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "Vvedite 3nazenie N= ";
	cin >> n;
	if (n > b)
	{
		m = ((n + a) / -b) + sqrt (pow (sin( a) ,2) - cos (n));
	}

	else if (n == b)
	{
	m= pow(b, 2) + tan(n*a);
	}

	else if (n > b)
	{
		 m = pow(b, 3) + n * pow(a, 2);
	}
	cout << "m=" << m << endl;

	int main();
	{
		if (a >= b)
		{
			n=sqrt(pow(a*b, 3));
		}
		else 
		{
			n=pow(a, 2) + (a - b) / sin(a*b);
		}
		cout << "n=" << n << endl;
		system("pause");
		return 0;
	}
}

