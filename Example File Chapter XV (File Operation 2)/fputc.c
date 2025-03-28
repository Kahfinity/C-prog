/*
	File Program : fputc.c
		Menciptakan dan mengisi file dengan data karakter dari keyboard 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *pf;				//Pointer-Ke-File
	char kar;
	
	//Ciptakan file
	if((pf = fopen("COBA.TXT", "w")) == NULL)
	{
		printf("file tidak dapat diciptakan!\r\n");
		exit(1);
	}
	
	printf("Ketikkan apa saja ,Akhiri dengan ENTER.\n");
	printf("Program akan membaca perkarakternya\n");
printf("dan akan menyimpannya dalam file COBA.TXT\n\n");
	
	while ((kar = getchar()) != '\n')//baca kar dari keyboard
	fputc (kar,pf);	//tulis ke file per karkter
	
	fclose(pf);			//tutup file
}
