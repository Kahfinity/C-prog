/*
	File Program : ekstern3.c
		contoh program dengan variable eksternal dan variable lokal dengan nama yang sama
*/

#include <stdio.h>

int i = 273;				//variable eksternal

void tambah (void);

int main()
{
	extern int i;			//variable eksternal
	
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
	int i;			//variable eksternal
	i++;
}
