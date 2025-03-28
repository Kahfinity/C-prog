/*
	File Program : gantinama.c
		Contoh program untuk mengganti nama file
*/

#include <stdio.h>
#include <stdlib.h>

#define PJG 65

main()
{
	int kode;
	char namafilelama[PJG], namafilebaru[PJG];
	
	printf("Nama file yang akan diganti : ");
	gets(namafilelama);
	printf("Nama file yang baru		   : ");
	gets(namafilelama);
	kode = remove(namafilebaru);
	
	if(kode == 0)
		printf("File sudah dihapus\n");
	else
		printf("Gagal dalam mengganti nama\n");
}
