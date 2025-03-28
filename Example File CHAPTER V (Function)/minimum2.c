/*
	File program : minimum2.c
*/

#include <stdio.h>

float minimum(float ,float );

int main()
{
	float a,b, kecil;
	
	printf("Masukkan Nilai a : ");
		scanf("%f", &a);
	printf("Masukkan Nilai b : ");
		scanf("%f", &b);

	kecil = minimum (a, b);
		printf("Bilangan terkecil antara %g dan %g adalah %g\n\n", a,b, kecil);
}

float minimum (float x, float y)
{
	if (x < y)
		return (x);
	else
		return (y);
}
