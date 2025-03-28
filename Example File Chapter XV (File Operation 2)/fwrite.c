/*
File program: fwrite.c
Menyimpan data bertipe struktur ke file memakai fwrite()
*/

#include <stdio.h> 
#include <stdlib.h>

main()
{
	FILE *f_struktur;
	char jawaban; 
	int sudah_benar;
	
	struct 
	{
		char judul[26];
		char pengarang[20];
		int jumlah;
	}buku;					//variable buku bertipe struktur
	
	//Buka file
	if((f_struktur = fopen("DAFBUKU.DAT", "wb")) == NULL)
	{
		printf("File tidak dapat diciptakan !\n"); 
		exit(1);
	}
	
	do
	{
		fflush(stdin);	//Hapus isi penampung kyboard
		printf("judul buku : ");
		gets(buku.judul);
		printf("Nama pengarang : ");
		gets(buku.pengarang);
		printf("Jumlah buku : "); 
		scanf("%d", &buku.jumlah);
		fflush(stdin);	//Hapus isi penampung kyboard
		
		//Rekam sebuat data bertipe struktur
		fwrite(&buku, sizeof(buku), 1, f_struktur);
		printf("\nMau merekam data lagi [Y/T] ?");
		
			do
			{
				jawaban = getchar();
				sudah_benar = ((jawaban == 'Y') || 
									(jawaban == 'y') ||
									(jawaban == 'T') || 
									(jawaban == 't'));
			}while(!sudah_benar);
			
			printf("\n");
			
	}while(jawaban == 'Y' || jawaban == 'y');
	
	fclose(f_struktur);  /* Tutup file */
}
