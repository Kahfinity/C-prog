/*
	File Program union2.c
	Contoh mengubah nilai variable union melalui fungsi
*/

#include <stdio.h>

union bil_bulat
{
	unsigned int di;
	unsigned char dc[2];		// Definisi tipe union
};

void beri_nilai(union bil_bulat *x);	// Prototype fungsi

int main()
{
	union bil_bulat bil_x;	// Deklarasi var union
	
	// Melewatkan alamat union
	beri_nilai(&bil_x);
	printf("di = %d\n", bil_x.di);
	printf("dc[0] = %d  dc[1] = %d\n", bil_x.dc[0],
													bil_x.dc[1] );
}

void beri_nilai(union bil_bulat *x)
{
	x -> di = 321;		/* Element ini yang ditunjuk
								oleh x diberi nilai 321
							*/
}
