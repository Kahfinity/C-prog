/*
	File Program : _getw.c
		Contoh membaca isi file biner menggunakn getw()
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *pf;		//ptr-ke-file
	int nilai, nomor = 0;
	//Buka file biner untuk dibaca
	if((pf = fopen ("BILANGAN.DAT", "rb")) == NULL) //Ciptakan 																file
	{
		printf("File gagal diciptakan!\n");
		exit(1);
	}
	
	printf("ISI FILE BILANGAN.DAT : \n");
	
	while(1)
	{
		nilai = _getw(pf);		
		//Baca sebuah int dari file
		if(feof(pf) != 0)	//Jika akhir file,keluar loop*
		break;
								//Tampilkan ke layar
		printf("%2d. %d\n", ++nomor, nilai);
	}
	fclose(pf);				//menutup file
}
