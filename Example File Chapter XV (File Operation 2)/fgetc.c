/*
	File Program : fgetc.c
		Contoh membaca isi file per karakter
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *pf;				//Pointer-Ke-File
	char kar;
	
	//Ciptakan file
	if((pf = fopen("COBA.TXT", "r")) == NULL)  //Buka file
	{
		printf("file tidak dapat diciptakan!\r\n");
		exit(1);								//selesai
	}

	while ((kar = fgetc(pf)) != EOF)//baca kar dari file
	putchar (kar);	//tampilan ke layar
	
	printf("\n");
	fclose(pf);			//tutup file
}
