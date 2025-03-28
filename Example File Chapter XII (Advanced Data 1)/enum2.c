/*
	File Program : enum2.c
	Contoh pemakaian enuminasi
*/

#include <stdio.h>

int main()
{
	// Definisi tipe data enuminasi
	enum data_hari
	{ senin,
		selasa,
		rabu,
		kamis,
		jumat,
		sabtu,
		minggu 
	};
	
	// Keterangan nama hari
	static char str[][7] = 
	{  "SENIN", 
		"SELASA", 
		"RABU", 
		"KAMIS", 
		"JUMAT", 
		"SABTU", 
		"MINGGU" 
	};
	
	// Deklarasi variable enuminasi
	enum data_hari hari_kerja;
	
	int jam_kerja;
	int total_jam = 0;
	
	// Cetak nama hari dari senin sampai dengan jumat
for(hari_kerja = senin;hari_kerja <= jumat;hari_kerja++)
	{
		printf("Jumlah jam kerja hari ini ");
		printf("%-6s (jam) : ", str[hari_kerja]);
		scanf("%d", &jam_kerja);
		total_jam = total_jam + jam_kerja;
	}
	
	printf("\nTotal Jam Kerja = %d\n", total_jam);
}
