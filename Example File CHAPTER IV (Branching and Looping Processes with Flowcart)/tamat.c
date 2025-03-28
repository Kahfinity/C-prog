/*
	File Program : tamat.c
		pemakaian break untuk keluar dari looping
*/

#include <stdio.h>

int main()
{
	char kar;
		printf("ketik sembarang kalimat");
		printf("dan akhiri dengan ENTER\n\n");
	for(;;)
	{
		kar = getchar();
		if (kar == '\n')
		break;
	}
	
	printf("\nSelesai\n");
	
	return 0;
}
