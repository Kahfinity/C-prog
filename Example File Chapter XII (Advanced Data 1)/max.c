/*
	File Program : max.c
	Menentukan nilai terbesar dengan ternary operator
*/

#include <stdio.h>

int main()
{
	float nilai1, nilai2, max;
	
	printf("Masukkan dua buah nilai : ");
	scanf("%f %f", &nilai1, &nilai2);
	
	max = (nilai1 > nilai2) ? nilai1 : nilai2;
	printf("Nilai terbesar = %g\n", max);
}
