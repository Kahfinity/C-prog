/*
	File Program : hapusfile.c
		Contoh program untuk menghapus file
*/

#include <stdio.h>
#include <stdlib.h>

#define PJG 65

main()
{
	int kode;
	char namafile[PJG];
	
	printf("Nama file yang akan dihapus : ");
	gets(namafile);
	
	kode = remove(namafile);
	if(kode == 0)
		printf("File sudah dihapus\n");
	else
		printf("Gagal dalam menghapus file\n");
}
