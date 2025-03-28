/*
	File Program : enum1.c
	Contoh penggunaan enuminasi
*/

#include <stdio.h>

int main()
{
	enum manusia					// Definisi tipe
	{
		pria,wanita
	};
	
	enum manusia jns_kelamin;	// Deklarasi var 
	
	jns_kelamin = pria;			// Diisi dengan pria
	printf("Isi jns_kelamin = %d\n", jns_kelamin);
	
	jns_kelamin = wanita;		// diisi dengan wanita
	printf("Isi jns_wanita  = %d\n", jns_kelamin);
}
