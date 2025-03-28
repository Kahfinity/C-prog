/*
	File Program : student1.c
		Mengisi field dr variable struktur kemudian menampilkannya
*/

#include <stdio.h>
#include <string.h>

struct date 
{
	// Definisi global dari tipe date
	int month;
	int day;
	int year;
};

struct student
{
	// Definisi global dari tipe student
	char name[30];
	struct date brithday;
};

// Deklarasi global dari variable mhs
struct student mhs;
int main()
{
	// Memberikan nilai kepada field dari struktur mhs
	strcpy(mhs.name, "MUHAMMAD IHSAN");
	mhs.brithday.month = 8;
	mhs.brithday.day	 = 10;
	mhs.brithday.year	 = 1970;
	
	// Menampilkan isi semua filed dari struktur mhs
	printf("Name		: %s\n", mhs.name);
	printf("Brithday  	: %d-%d-%d\n", mhs.brithday.month,mhs.brithday.day, mhs.brithday.year);
	return 0;
}
