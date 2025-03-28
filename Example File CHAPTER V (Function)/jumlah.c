/*
	File Program : jumlah.c	
		Contoh penggunaan prototipe Fungsi
*/

#include <stdio.h>

float  jumlah(float ,float );				//Prototipe Fungsi

int main()
{
	float a,b, c;
	
	printf("Masukkan Nilai a : ");
		scanf("%f", &a);
	printf("Masukkan Nilai b : ");
		scanf("%f", &b);
	
	c = jumlah(a, b);
	printf("\nHasil Penjumlahan a + b = %g\n", c);
}

float jumlah(float x, float y)			//Definisi Fungsi
{
	if(x < y)
		return (x + y);						
}
