/*
	File Program : bitf1.c
	Bitfiled untuk menampilkan bentuk biner dari karakter masukan
*/

#include <stdio.h>

int main()
{
	struct info_byte		// Definisi tipe bitfiled
	{
		unsigned bit0:1;		// bit ke-0
		unsigned bit1:1;		// bit ke-1
		unsigned bit2:1;		// bit ke-2
		unsigned bit3:1;		// bit ke-3
		unsigned bit4:1;		// bit ke-4
		unsigned bit5:1;		// bit ke-5
		unsigned bit6:1;		// bit ke-6
		unsigned bit7:1;		// bit ke-7
	};
	
	// Deklarasi variable union dan elemen bitfiled
	
	union 
	{
		unsigned char karakter;
		struct info_byte byte;
	}ascii;
	
	printf("Masukkan sebuah karakter : ");
	scanf("%c", &ascii.karakter);
	
	printf("\nKode ascii dari karakter %c adalah %d\n",
				ascii.karakter, ascii.karakter);
	printf("Bentuk biner dari nilai %d adalah ",
				ascii.karakter);
	printf("%d%d%d%d%d%d%d%d\n", 
	ascii.byte.bit7,ascii.byte.bit6,ascii.byte.bit5,
	ascii.byte.bit4,ascii.byte.bit3,ascii.byte.bit2,
	ascii.byte.bit1,ascii.byte.bit0 );	
}
