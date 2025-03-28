/*
	File Program : zodiak.c
		Menentukan zodiak berdasarkan data tanggal lahir masukan
*/

#include <stdio.h>

int main()
{
	struct zodiak
	{
		char nama[11];
		int tgl_awal;
		int bln_awal;
		int tgl_akhir;
		int bln_akhir;
	};
	
	static struct zodiak bintang = 
	{"sagitarius", 22,11,21,12};
	int tgl_1hr, bln_1hr, thn_1hr;
	
	printf("Masukan tgl lahir Anda (XX-XX-XXX) : ");
	scanf("%d-%d-%d", &tgl_1hr,&bln_1hr,&thn_1hr);
	
	if(tgl_1hr >= bintang.tgl_awal && bln_1hr == bintang.bln_awal || (tgl_1hr <= bintang.tgl_awal && bln_1hr == bintang.bln_akhir))
	printf("Bintang Anda adalah %s\n", bintang.nama);
	else
	printf("Bintang Anda bukan %s\n", bintang.nama);
		
	return 0;
}
