/*
	File Program : posisi1.c
	Melewatkan elemen struktur sebagai parameter fungsi scr acuan
*/

#include <stdio.h>

void tukar_xy(int *,int *);

int main()
{
	struct koordinat
	{
		int x;
		int y;
	}posisi;
	
	printf("Masukkan Koordinat posisi (x,y) : ");
	scanf("%d, %d", &posisi.x, &posisi.y);
	
	printf("x, y semula = %d, %d\n", posisi.x, posisi.y);
	tukar_xy(&posisi.x, &posisi.y);
	printf("x, y sekarang = %d, %d\n", posisi.x, posisi.y);
}

void tukar_xy(int *a, int *b)
{
	int z;
	
	z = *a;
	*a = *b;
	*b = z;
}
