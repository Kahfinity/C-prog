/*
	File Program : Pilihan.c
		Untuk membaca tombol Y dan T
*/

#include <stdio.h>

int main()
{
	char pilihan;
	int sudah_benar;
		printf("Pilih lah Y atau T\n");
//Program dilanjutkan jika tombol Y,y atau T,t ditekan
	do
{
		pilihan = getchar(); //baca tombol
		sudah_benar = (pilihan == 'Y') || (pilihan == 'y')
		|| (pilihan == 'T') || (pilihan = 't');

}
	while(! sudah_benar);
//Memberi keterangan tentang pilihan
	switch(pilihan)
	{
		case 'Y':
		case 'y':
		puts("\nPilihan Anda Adalah Y");
		break;
		case 'T':
		case 't':
		puts("\nPilihan Anda Adalah T");
	}
	
	return 0;
}
