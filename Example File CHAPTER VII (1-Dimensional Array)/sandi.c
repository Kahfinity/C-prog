/*
	File Program : sandi.c
		contoh inisialisasi array tak berukuran
*/

#include <stdio.h>
#include <stdlib.h>

#define JUM_KOLOM 2
#define MAX_KAR 256

int main()
{
	char konfersi [] [JUM_KOLOM] = 
	{
		'A','T',
		'a','t',
		'I','V',
		'i','v',
		'U','J',
		'u','j',
		'E','M',
		'e','m',
		'O','S',
		'o','s'
	};
	
	char kalimat[MAX_KAR], karakter;
	int i = 0,j,jum_kar,jum_penyandi;
	
	printf
	("Masukkan sebuah kalimat dan akhiri dengan ENTER\n");
	printf
	("Kemudian kalimat tersebut akan saya sandikan\n");
	printf("Kalimat : ");
	
	//Memasukan data karakter ke array kallimat
	while((kalimat[i] = getchar())	!= '\n')
		i++;
	jum_kar = i;
	
	//Sandikan dan tampilkan ke layar
	printf("\nHasil setelah disandikan : ");
	jum_penyandi = sizeof(konfersi) / JUM_KOLOM;
	
	for(i = 0;i < jum_kar;i++)
	{
		karakter = kalimat [i];
		for(j = 0;j < jum_penyandi;j++)
		{
			if(karakter == konfersi[j][0])
			{
				karakter = konfersi[j][1];
				break;	//keluar dari for terdalam
			}
			if(karakter == konfersi[j][1])
			{
				karakter = konfersi[j][0];
				break;	//keluar dari for terdalam
			}
		}
		putchar(karakter);
	}
	printf("\n\n");
}
