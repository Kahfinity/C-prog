/*
	File Program : baca_acak.c
		Membaca isi file secara random
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	struct 
	{
		char judul[30];
		char pengarang[30];
		int jumlah;
	}buku;					//Variable buku bertipe syruktur
	
	FILE *pf;
	char jawab;
	int i, no_record, sudah_benar;
	long int offset_byte;
	
	//Buka file
	if((pf = fopen("DAFBUKU.DAT", "rb")) == NULL)
	{
		printf("File tidak dapat diciptakan !\n"); 
		exit(1);
	}
	
	do
	{
		i = 1;
printf("Nomor record dari data yang mau di tampilkan :");
		scanf("%d", &no_record);
		
		offset_byte = (no_record-1)* sizeof(buku);
		fseek(pf, offset_byte, SEEK_SET);
		
		if(fread(&buku, sizeof(buku), 1, pf) == 0)
			printf("Nomor record tidak dikenali!\n");
		else
		{
			printf 
	("%2s. %-30s %-30s %s\n\n", "No", "judul buku","nama pengarang", "jumlah");
			printf("%2d. %-30s %-30s %4d\n", i++, buku.judul, buku.pengarang, buku.jumlah);
		}
		
		printf("\nMau mencoba lagi (Y/T)? ");
			do
			{
				jawab = getchar();
				sudah_benar = ((jawab == 'Y') || 
									(jawab == 'y') ||
									(jawab == 'T') || 
									(jawab == 't'));
			}while(!sudah_benar);
			
			printf("\n");
			
	}while(jawab == 'Y' || jawab == 'y');
	
	fclose(pf);  /* Tutup file */
}
