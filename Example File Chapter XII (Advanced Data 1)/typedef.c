/*
	File Program : typedef.c
	Contoh penggunaan typedef
*/

#include <stdio.h>

// BYTE merupakan nama baru dari unsigned char
typedef unsigned char BYTE;

BYTE beri_nilai_awal(void);		// Deklarasi fungsi

int main()
{
	BYTE kode;				// Deklarasi variable karakter
	
	kode = beri_nilai_awal();
	printf("Isi kode = %u\n", kode);
}

BYTE beri_nilai_awal(void)
{
	return (143);
}
