/*
	File Program : jhari.c
*/


#include <stdio.h>
int main()
{
	int bulan,tahun,jhari;
	int jum_hari[12] = 
	{31,28,31,30,31,30,31,31,30,31,30,31};
	
	puts("MEMPEROLEH JUMLAH HARI");
	puts("PADA SATU BULAN DAN SATU TAHUN");
	puts("------------------------------");
	printf("Masukkan bulan (1..12)	: ");
	scanf("%d", &bulan);
	printf("Masukkan tahunnya		: ");
	scanf("%d", &tahun);
	
	if(bulan == 2)
		if(tahun %  4 == 0)
					jhari = 29;
				else
					jhari = 28;
	else
			jhari = jum_hari[bulan-1];
	printf("\nJumlah hari dalam bulan %d tahun %d adalah %d hari\n", bulan,tahun,jhari);
}
