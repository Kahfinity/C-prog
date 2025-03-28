/*
	File program void.c
		contoh fungsi tanpa nilai keluaran (pemakaian void)
*/

#include <stdio.h>

void info_program();				//Deklarasi Fungsi
int main()
{
	info_program();				//Pemanggilan Program
}

void info_program()				//Deklarasi Fungsi
{
	puts("========================================");
	puts("Program Dibuat oleh 	Moh. izzudin"		  );
	puts("Tanggal : 12 juni 2001"						  );
	puts("													 ");
	puts("Selamat menggunakannya..................");
	puts("========================================");
}
