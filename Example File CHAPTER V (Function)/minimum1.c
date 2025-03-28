/*
	File program : minimum1.c
*/

#include <stdio.h>

int minimum (int,int );

int main()
{
	int   a,b, kecil;
	
	printf("Masukkan Nilai a : ");
		scanf("%d", &a);
	printf("Masukkan Nilai b : ");
		scanf("%d", &b);

	kecil = minimum (a,b);
		printf("Bilangan terkecil antara %d dan %d adalah %d\n\n", a,b, kecil);
}

int  minimum(int  x, int y)
{
	if(x < y)
		return (x);
	else
		return (y);
}
