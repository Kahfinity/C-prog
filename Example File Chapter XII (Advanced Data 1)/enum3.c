/*
	File Program : enum3.c
	Contoh mengubah nilai default dari suatu tipe enumerasi
*/

#include <stdio.h>

int main()
{
	// Definisi tipe data enumerasi
	enum {
		staff = 4, manajer, direktur
		  }jenjang_jab;
	
	for
(jenjang_jab =staff;jenjang_jab <= direktur;jenjang_jab++)
	{
		printf("%d\n", jenjang_jab);
	}
}
