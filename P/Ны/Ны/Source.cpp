#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double func_toch(double t) {
	return 0.1 * exp(2 * t) - exp((-3) * t) - 0.5*pow(t, 2);
}

double right(double t, double* x, double* f) {
	f[0] = (double)x[1];
	f[1] = (double)x[0] * (6) + 3* pow(t ,2) - t - 1;
	return 1;
}

void elir(double t, double h, double* x)
{
	double xr[2], f[2];
	int i;

	right(t, x, f);
	for (i = 0; i < 2; i++)
		xr[i] = (double)x[i] + h * f[i];

	right(t, xr, f);
	for (i = 0; i < 2; i++)
		x[i] = xr[i];

}

void RK_2(double t, double h, double* x)
{
	double xr[2], f[2];
	int i;
	double h2;

	h2 = (double)h / 2;

	right(t, x, f);
	for (i = 0; i < 2; i++) {
		xr[i] = (double)x[i] + h2 * f[i];
	}

	right(t * h2, xr, f);
	for (i = 0; i < 2; i++)
	{
		x[i] = (double)x[i] + h2 * f[i];

	}
}


void RK_4(double t, double h, double* x)
{
	double xr[2], f[2], s[2];
	int i;
	double h2, h6;

	h2 = (double)h / 2;
	h6 = (double)h / 6;

	right(t, x, f);
	for (i = 0; i < 2; i++) {
		xr[i] = (double)x[i] + h2 * f[i];
		s[i] = f[i];
	}


	right(t + h2, xr, f);
	for (i = 0; i < 2; i++) {
		xr[i] = (double)x[i] + h2 * f[i];
		s[i] += 2 * f[i];
	}


	right(t + h2, xr, f);
	for (i = 0; i < 2; i++) {
		xr[i] = (double)x[i] + h * f[i];
		s[i] += 2 * f[i];
	}


	right(t + h, xr, f);
	for (i = 0; i < 2; i++)
		x[i] = (double)x[i] + h6 * (s[i] + f[i]);
}

int main() {
	double xk2[2], xk1[2], xk4[2];
	double t = 0, d2h = 5;
	double step = 0.01;

	xk4[0] = -0.9;
	xk4[1] = 3.2;
	xk2[0] = -0.9;
	xk2[1] = 3.2;
	xk1[0] = -0.9;
	xk1[1] = 3.2;


	while (t < d2h) {

		RK_4(t, step, xk4);
		RK_2(t, step, xk2);
		elir(t, step, xk1);
		func_toch(t);
		t += step;
		cout << setprecision(5) << fixed << xk4[0] << " \t " << xk4[1] << " \t " << xk2[0] << " \t " << xk2[1] << " \t " << xk1[0] << " \t " << xk1[1] << " \t " << func_toch(t) << endl;
	}
	system("pause");
}
