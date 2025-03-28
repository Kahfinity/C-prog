/*
	File Program : tukar1.c
		untuk melihat pengaruh pemanggilan nilai pada fungsi untuk penukaran dua data
*/

#include <stdio.h>

void tukar (int *py, int *px);

int main()
{
	int a,b;
	
	a = 88;
	b = 77;
	
	printf("Nilai Sebelum Pengambilan Fungsi\n");
	printf("a = %d				b = %d\n", a,b);
	
	tukar(&a, &b);					//alamat a dan alamat b
	
	printf("\nNilai Setelah Pengambilan Fungsi\n");
	printf("a = %d				b = %d\n", a,b);
}

void tukar (int *px ,int *py)
{
	int z;
	
	z = *px;
	*px = *py;
	*py = z;
	
	printf("\nNilai di akhir fungsi tukar()\n");
	printf("x = %d				y = %d\n", *px,*py);
}
