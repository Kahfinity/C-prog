/* File Program : pbulan.c
Fungsi dengan keluaran berupa pointer yang menunjuk  string */

#include <stdio.h>

char *nama_bulan(int n) ; // prototype function

main ()
{
	int b1;
	char *pch;
	
	printf("Masukkan Bulan 1..12 : ");
	scanf("%d", &b1);
	pch = nama_bulan(b1);
	printf("Bulan ke-%d adalah %s\n", b1, nama_bulan(b1));
}
char *nama_bulan(int n)
{
	static char *bulan[] = {
		"Kode bulan salah", 
		    "Januari",
		    "Februari",
		    "Maret",
		    "April",
		    "Mei",
		    "Juni",
		    "Juli",
		    "Agustus",
		    "September",
		    "Oktober",
		    "November",
		    "Desember",
};

return ( (n<1 || n>12) ? bulan [0] : bulan[n]);
}
