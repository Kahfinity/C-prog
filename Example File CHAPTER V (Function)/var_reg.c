/*
	File Program : var_reg.c
		contoh variable register
*/

#include <stdio.h>

int main()
{
	register int i;				//variable register
	int jumlah = 0;
	
	for(i = 1;i <= 100; i++)
		jumlah = jumlah + i;
	
	printf("1 + 2 + 3 + ... + 100 = %d\n", jumlah);
}
