#include <iostream>
using namespace std;

int main()
{
	int k;
	float a, b, p;
	cout << «Vvedite chyslo a i chyslo b» << endl;
	cin >> a;
	cin >> b;
	cout << «Chco zrobyty ? \n 1) + \n 2) - \n 3)* \n 4) / \n»;
	cin >> k;
	switch (k)
	{
	case 1:
		p = a + b;
		break;
	case 2:
		p = a — b;
		break;
	case 3:
		p = a * b;
		break;
	case 4:
		p = a / b;
		break;
	}
	cout << «Rezultatom: » << p << endl;
}