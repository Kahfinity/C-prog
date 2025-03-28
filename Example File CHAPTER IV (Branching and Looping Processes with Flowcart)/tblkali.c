/*
	File program : tblkali.c
		Loop for berpasangan untuk membuat tabel perkalian
*/

#include <stdio.h>
#define MASK 8

int main()
{
	int baris,kolom,hasil_kali;
	for(baris = 1;baris <= MASK;baris++)
{
	for(kolom = 1;kolom <= MASK;kolom++)
{
	hasil_kali = baris * kolom;
	printf("%4d", hasil_kali);		
}

	printf("\n\n"); //pindah baris
}

	return 0;
}
