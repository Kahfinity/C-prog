/*
	File Program : ekstern1.c
		contoh program dengan variable eksternal
*/

#include <stdio.h>

int i = 273;				//variable eksternal

void tambah (void);

int main()
{
	printf("Nilai awal i = %d\n", i);
	i += 7;
	printf("Nilai awal i kini = %d\n", i);
	tambah();
	printf("Nilai awal i kini = %d\n", i);
	tambah();
	printf("Nilai awal i kini = %d\n", i);
}

void tambah (void)
{
	i++;
}
