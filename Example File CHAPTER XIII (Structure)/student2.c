/*
	File Program : student1.c
		Array struktur untuk menyimpan data-data student
*/

#include <stdio.h>
#include <string.h>
#define MASK 20

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

//Deklarasai global dari variable student
struct student data_mhs[MASK];

int main()
{
	int i=0, sudah_benar, jml;
	char lagi, data;
	
	//masukkan data
	do
	{
		printf("Nama		: %s", data_mhs[i].name);
		//scanf("%s" , &data_mhs[i].name);
		
	fgets(data_mhs[i].name,sizeof data_mhs[i].name,stdin);
		
		printf("Brithday (mm-dd-yyy) : ");
		scanf("%d-%d-%d", 
				&data_mhs[i].brithday.month,
				&data_mhs[i].brithday.day,
				&data_mhs[i].brithday.year);
		printf("\n");
		
		i++;
		
		printf("Mau memasukkan data lagi [Y/T] ?");
		do
	{
		lagi = getchar( );	//baca tombol
            sudah_benar = (lagi == 'Y' || lagi == 'y') || (lagi == 'T' || lagi == 't');
	}while(! sudah_benar);
	
	//Hapus sisa data dalam penampungan keybord
	fflush(stdin);
	printf("\n");
	}while(lagi == 'Y' || lagi == 'y');
	
	jml = i;
	
	//Menampilkan data
	printf("DATA SISWA\n");
	for(i=0 ; i<jml ; i++)
	{
	printf("%d. 	Name		: %s", i+1, data_mhs[i].name);
		printf("	Birthday  	: %d-%d-%d\n\n",
					data_mhs[i].brithday.month,
					data_mhs[i].brithday.day,
					data_mhs[i].brithday.year );
	};
}
