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

	//ввод n

	cout << "n?";

	cin >> n;

	//ввод элементов матрицы А

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

	//LU-разложение

	for (int k = 0; k < n - 1; k++) // цикл для итераций

	{

		for (int i = k + 1; i < n; i++) // цикл i

		{

			for (int j = k + 1; j < n; j++) // цикл j

			{

				l[i][k] = a[i][k] / a[k][k];//элементы матрицы L, К-ой иттерации

				a[i][j] = a[i][j] - l[i][k] * a[k][j]; //элементы матрицы А, К-ой иттерации

				//u[i][j] = a[i][j]; //элементы матрицы U, К-ой иттерации

			}

		}

	}

	cout << "-----------------------------------------------------" << endl;

	//вывод определителя матрицы U

	for (int i = 0; i < n; i++)

	{

		d += a[i][i];

	}

	//вывод A

	for (int i = 0; i < n; i++)

	{

		for (int j = 0; j < n; j++)

		{

			cout << setprecision(2) << fixed << a[i][j] << " ";

		}

		cout << endl;

	}

	cout << "-----------------------------------------------------" << endl;

	//вывод Л

	for (int i = 0; i < n; i++)

	{

		for (int j = 0; j < n; j++)

		{

			cout << setprecision(2) << fixed << l[i][j] << " "; //вывод L

		}

		cout << endl;

	}

	cout << "-----------------------------------------------------" << endl;

}