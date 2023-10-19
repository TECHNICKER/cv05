#include "cv05.h"
#include "math.h"

double c[2] = { 0,0 };

void soucet(double a[],double b[],double c[])
{
	c[0] = a[0] + b[0];
	c[1] = a[1] + b[1];
}

void rozdil(double a[], double b[], double c[])
{
	c[0] = a[0] - b[0];
	c[1] = a[1] - b[1];
}

void soucin(double a[], double b[], double c[])
{
	c[0] = ((a[0] * b[0]) - (a[1] * b[1]));
	c[1] = ((a[0] * b[1]) + (a[1] * b[0]));
}

void tisk(double c[])
{
	printf("%lf + %lf i\n", c[0], c[1]);
}

void tisk2(double c[])
{
	printf("%lf (cos %lf + sin %lf i)\n", sqrt(powl(c[0], 2) + powl(c[1], 2)), atan(c[1]/c[0]), atan(c[1] / c[0]));
}

int main()
{
	while (1)
	{
		double a[2] = { 0,0 };
		double b[2] = { 0,0 };

		char operace = ' ';

		printf("zadejte prvni komplexni cislo ve tvaru 'a + b i': ");
		scanf("%lf + %lf i", &a[0], &a[1]);

		printf("zadejte druhe komplexni cislo ve tvaru 'c + d i': ");
		scanf("%lf + %lf i", &b[0], &b[1]);


		printf("zvolte operaci (+, -, *): ");
		scanf(" %c", &operace);

		switch (operace)
		{
		case '+':
			soucet(a, b, c);
			break;

		case '-':
			rozdil(a, b, c);
			break;

		case '*':
			soucin(a, b, c);
			break;

		}

		tisk(c);
		tisk2(c);

	}
	return 0;
}
