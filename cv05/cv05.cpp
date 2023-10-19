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

void tisk(double c[2])
{
	printf("%lf + %lf i\n", c[0], c[1]);
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


		printf("zvolte operaci (+ nebo -): ");
		scanf(" %c", &operace);

		switch (operace)
		{
		case '+':
			soucet(a, b, c);
			break;

		case '-':
			rozdil(a, b, c);
			break;

		}

		tisk(c);

	}
	return 0;
}
