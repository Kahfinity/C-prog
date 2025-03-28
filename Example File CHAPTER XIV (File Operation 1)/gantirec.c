/*
	File Program : gantirec.c
		Mengganti isi suatu record secara random
*/

#include <stdio.h>
#include <stdlib.h>

#define SATU_RECORD 1

main()
{
	struct 
	{
		char judul[30];
		char pengarang[30];
		int jumlah;
	}buku;					//Variable buku bertipe structur
	
	FILE *pf;
	char jawab;
	int no_record, sudah_benar, hasil_baca;
	long int offset_byte;
	
	//Buka file yang berisi data buku
	if((pf = fopen("DAFBUKU.DAT", "rb+")) == NULL)
	{
		printf("File tidak dapat diciptakan !\n"); 
		exit(1);
	}
	
	do
	{
		printf("Nomor record dari data yang mau diubah :");
		scanf("%d", &no_record);
		
		//Atur penunjuk posisi-file ke record tersebut
		offset_byte = (no_record-1)* sizeof(buku);
		fseek(pf, offset_byte, SEEK_SET);
		
		//Baca record yang ditunjuk oleh penunjuk posisi file
hasil_baca = fread(&buku, sizeof(buku), SATU_RECORD, pf);
		
		if(hasil_baca == 0)
		printf("Nomor record tidak dikenaki!\n");
		
		else
		{
	    printf ("\n%-30s %-30s %s\n\n", "No", "judul buku","nama pengarang", "jumlah");
		printf("%-30s %-30s %4d\n\n", buku.judul, buku.pengarang, buku.jumlah);
			
		printf("Jumlah buku tersebut kini = ");
		scanf("%d", &buku.jumlah);
			
		//Atur penunjuk posisi-file ke posisi sebelumnya
			fseek(pf, offset_byte, SEEK_SET);
			
		//Rekam ulang
			fwrite(&buku, sizeof(buku), SATU_RECORD, pf);
			
			printf("\nMau mengubah lagi (Y/T)? ");
			
			do
			{
				jawab = getchar();
				sudah_benar = ((jawab == 'Y') || 
									(jawab == 'y') ||
									(jawab == 'T') || 
									(jawab == 't'));
			}while(!sudah_benar);
		}
	}while(jawab == 'Y' || jawab == 'y');
	
	printf("\n");
	fclose(pf);  /* Tutup file */
}
