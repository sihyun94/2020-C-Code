
#include <stdio.h>

double getArea(double);
double getCircum(double);


double PI = 3.14;
int gi;

int main(void)
{

	double r = 5.87;

	const double PI = 3.141592;

	printf("����: %.2f\n", getArea(r));
	printf("�ѷ�1: %.2f\n", 2 * PI*r);
	printf("�ѷ�2: %.2f\n", getCircum(r));
	printf("PI: %f\n", PI);
	printf("gi: %d\n", gi);

	return 0;
}

double getArea(double r)
{
	return r*r*PI;
}
/// ///////12-3 circumference.c//////////
double getCircum(double r)
{
	return 2 * r * PI;
}