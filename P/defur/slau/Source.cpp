#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

double a[8][8];

double l[8][8];

double u[8][8];

double d;

int n;

int main() {

	//���� n

	cout << "n?";

	cin >> n;

	//���� ��������� ������� �

	for (int i = 0; i < n; i++)

	{

		for (int j = 0; j < n; j++)

		{

			cin >> a[i][j];

		}

	}

	//l-matrix start

	for (int i = 0; i < n; i++)

	{

		for (int j = 0; j < n; j++)

			l[i][j] = 0;

		l[i][i] = 1;

	}

	//LU-����������

	for (int k = 0; k < n - 1; k++) // ���� ��� ��������

	{

		for (int i = k + 1; i < n; i++) // ���� i

		{

			for (int j = k + 1; j < n; j++) // ���� j

			{

				l[i][k] = a[i][k] / a[k][k];//�������� ������� L, �-�� ���������

				a[i][j] = a[i][j] - l[i][k] * a[k][j]; //�������� ������� �, �-�� ���������

				//u[i][j] = a[i][j]; //�������� ������� U, �-�� ���������

			}

		}

	}

	cout << "-----------------------------------------------------" << endl;

	//����� ������������ ������� U

	for (int i = 0; i < n; i++)

	{

		d += a[i][i];

	}

	//����� A

	for (int i = 0; i < n; i++)

	{

		for (int j = 0; j < n; j++)

		{

			cout << setprecision(2) << fixed << a[i][j] << " ";

		}

		cout << endl;

	}

	cout << "-----------------------------------------------------" << endl;

	//����� �

	for (int i = 0; i < n; i++)

	{

		for (int j = 0; j < n; j++)

		{

			cout << setprecision(2) << fixed << l[i][j] << " "; //����� L

		}

		cout << endl;

	}

	cout << "-----------------------------------------------------" << endl;

}