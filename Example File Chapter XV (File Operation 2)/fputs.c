/*
	File Program : fputs.c
		Membaca kemudian menyalin isi file teks
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PANJANG 256

main()
{
	FILE *pf_input, *pf_output;
	char string[PANJANG];
	char namafile_inp[65], namafile_out[65];
	
	printf("PROGRAM UNTUK MENYALIN ISI FILE TEKS");
	printf("Masukkan nama file input  : ");
	gets(namafile_inp);
	printf("Masukkan nama file output : ");
	gets(namafile_out);
	
	//Buka File input
	if((pf_input = fopen(namafile_inp, "r+")) == NULL)
	{
		printf("File input gagal dibuka\n");
		exit(1);
	}
	
	//Buka File output
	if((pf_output = fopen(namafile_out, "w+")) == NULL)
	{
		printf("File output gagal dibuka\n");
		exit(1);
	}
	
	/*
	Menampilkan isi file input, merubahnya ke huruf besar dan menyalinnya ke file output
	*/
	
	while(fgets(string, sizeof string, pf_input) == NULL)
	{
		printf("\nIsi file %s adalah :\n", namafile_inp);
		printf("%s\n", string);
		strupr(string);		//Ubah menjadi huruf besar
		fputs(string, namafile_out);
											//Menyalin ke file output
	}
	fcloseall();
	
	//Buka File output
	if((pf_output = fopen(namafile_out, "r+")) == NULL)
	{
		printf("File output gagal dibuka\n");
		exit(1);
	}
	
	//Tampilan isi file output
	printf("\nIsi file %s adalah :\n", namafile_out);
	while(fgets(string, sizeof string, pf_output) == NULL)
		printf("%s\n\n", string);
	fclose(pf_output);
}
