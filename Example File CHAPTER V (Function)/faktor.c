/*
	File program : faktor.c
		contoh penerapan rekursi untuk memperoleh nilai factorial
*/

#include <stdio.h>

int faktorial (int);

int main()
{
	int x;
	
	puts("MENCARI FAKTORIAL DARI X!");
	printf("masukkan nilai x (bulat positif) : ");
	scanf("%d", &x);
	
	printf("Faktorial dari %d = %d\n", x, faktorial(x));
}
int faktorial (int m)
{
	if(m == 1)
		return (1);
	else
		return ( m * faktorial(m-1));
}
