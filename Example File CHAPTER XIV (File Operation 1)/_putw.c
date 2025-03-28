/*
	File Program : _putw.c
		Contoh menyimpan data bertipe int menggunakan putw()
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *pf;		//ptr-ke-file
	int nilai, sudah_benar;
	char jawab;
	
	if((pf = fopen("BILANGAN.DAT", "wb")) == NULL) //Ciptakan 																file
	{
		printf("File gagal diciptakan!\n");
		exit(1);
	}
	
	printf("MEYIMPAN DATA INTEGER KE FILE\n");
	
	do{
		printf("\nBilangan yang akan disimpan : ");
		scanf("%d",&nilai);	     //baca nilai dari keyboard
		_putw(nilai,pf);			
		//baca bilangan ke file
		printf("Memasukkan data lagi (Y/T)?");
			
		do
		{
			jawab = getchar();	//baca jawaban dari keyboard
			sudah_benar = 
							((jawab == 'Y') || (jawab == 'y') ||
							(jawab == 'T') || (jawab == 't'));
		}while(!sudah_benar);
	}
	while(jawab == 'Y' || jawab == 'y');
	
	printf("\nOke. Data sudah disimpan dalam file.\n");
	fclose(pf);				//menutup file
}
