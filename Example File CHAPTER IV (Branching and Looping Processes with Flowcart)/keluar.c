/*
	File program : keluar.c
		pemograman exit() untuk menghentikan eksekusi program
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char kar;
	printf("Tekan X untuk menghentikan program.\n");
	for(;;)
{
	while((kar = getchar()) == 'X')
	exit(0);
}

	return 0;
}
