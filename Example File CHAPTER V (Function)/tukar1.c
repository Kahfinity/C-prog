/*
	File Program : tukar1.c
		untuk melihat pengaruh pemanggilan nilai pada fungsi untuk penukaran dua data
*/

#include <stdio.h>

void tukar (int, int);

int main()
{
	int a,b;
	
	a = 88;
	b = 77;
	
	printf("Nilai Sebelum Pengambilan Fungsi\n");
	printf("a = %d				b = %d\n", a,b);
	
	tukar(a, b);
	
	printf("\nNilai Setelah Pengambilan Fungsi\n");
	printf("a = %d				b = %d\n", a,b);
}

void tukar (int x ,int y)
{
	int z;
	
	z = x;
	x = y;
	y = z;
	
	printf("\nNilai di akhir fungsi tukar()\n");
	printf("x = %d				y = %d\n", x,y);
}
