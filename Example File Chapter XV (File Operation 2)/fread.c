/*
	File Program : fread.c
		Membaca data bertipe struktur ke file menggunakan fread()
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *f_struktur;
	int i=1;
	
	struct 
	{
		char judul[30];
		char pengarang[30];
		int jumlah;
	}buku;				//variable buku bertipe struktur
	
	if((f_struktur = fopen("DAFBUKU.DAT", "wb")) == NULL)
	{
		printf("File tidak dapat diciptakan !\n"); 
		exit(1);
	}
	
printf 
	("%2s. %-30s %-30s %s\n\n", "No", "judul buku","nama pengarang", "jumlah");
	
//Diulang selama masih ada record yang terbaca didalam file
	while(fread(&buku, sizeof(buku), 1, f_struktur) == 1)
	printf("%2d. %-30s %-30s %4d\n", i++, buku.judul, buku.pengarang, buku.jumlah);
	
	printf("\n");
	fclose(f_struktur);		//tutup file
}
