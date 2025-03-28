/*
	File Program : BITF2.c
*/

#include <stdio.h>

int main()
{
	// Definisi tipe bitfiled
	struct info
	{
		unsigned info_x:2;
		unsigned info_y:1;
		unsigned kosong:5; // Bisa dihilangkan
	}status;
	
	status.info_x = 3;
	status.info_y = 1;
	
	printf("info_x = %d\n", status.info_x);
	printf("info_y = %d\n", status.info_y);
}
