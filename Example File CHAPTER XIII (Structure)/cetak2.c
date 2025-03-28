/*
	File Program : cetak2.c
	Melewatkan struktur sebagai parameter fungsi
*/

#include <stdio.h>

	struct date	//Definisi global dari tipe date
	{
		int month;
		int day;
		int year;
	};
	
void cetak_tanggal(struct date);
	
int main()
{
	struct date today;
	
	printf("Enter the current date (mm-dd-yyyy): ");
	scanf("%d-%d-%d", &today.month,&today.day,&today.year);
	
	cetak_tanggal(today);
}

void cetak_tanggal(struct date now)
{
	static char *nama_bulan[] = 
	{
			"Wrong Month", "January","February","March",     "April","May","June","July","August",           "September","October","November","December"
	};
	
	printf("Todays date is %s %d, %d\n\n", 
				nama_bulan[now.month],now.day,now.year);
}
