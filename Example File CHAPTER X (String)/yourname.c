/*
	File Program : yourname.c
		Contoh memasukkan data string dari keyboard
*/

#include <stdio.h>

int main()
{
	char name[15];
	
	printf("Masukkan Nama Anda : ");
	//getch (name);
	scanf("%s", name);
	
	printf("\n Hallo, %s. Selamat Belajar String.\n", name);

}