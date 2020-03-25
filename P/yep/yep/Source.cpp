#include <iostream>
#include <cmath>

using namespace std;
int main() {
	int n = 4;
	int m = 4;
	int c;
	int d;
	int a = 4;
	int b = 4;
	float A[4][4] = { {9, 2, 4.5, -7},
					  {1, 5, -3.2, 1},
					  {4, 0, -3, -5},
					  {0, 4, -1, -19} };
	float L[4][4] =
	{
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}

	};

	for (int c = 0; c < n; c++)
	{
		for (int d = 0; d < m; d++)
			cout << A[c][d] << " ";
		cout << endl;
	}

	cout << endl;

	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < m; b++)
			cout << L[a][b] << " ";
		cout << endl;
	}

	cout << endl;

}
	

