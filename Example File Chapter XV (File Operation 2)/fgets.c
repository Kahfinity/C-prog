/*
	File Program : fgets.c
		Membaca isi file teks
*/

#include <stdio.h>
#include <stdlib.h>

#define PANJANG 26

main()
{
	FILE *f_teks;
	char string[PANJANG];
	char namafile[65];
	
	printf("PROGRAM UNTUK MELIHAT ISI FILE TEKS \n\n");
	printf("Masukkan nama file :");
	gets(namafile);
	
	printf("\nIsi file %s adalah sbb :\n", namafile);
	if((f_teks = fopen(namafile, "rt")) == NULL)
	{
		printf("File gagal di buka\n");
		exit(1);
	}
	while(fgets(string, sizeof string, f_teks) != NULL);
	printf("%s\n\n", string);
	
	fclose(f_teks);
}
