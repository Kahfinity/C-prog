/*
	File Program : nilai_test.c
		Pemakaian Array untuk menyimpan sejumlah nilai test 
*/

#include <stdio.h>
#define MASK 5

int main()
{
	int i;
	float total = 0,rata;
	float nilai_test[MASK];				//Deklarasi Array
	
	for(i = 0;i < MASK;i++)//pemasukan nilai data 																		nilai_test
	{
		printf("Nilai tes ke-%d	: ", i+1);
		scanf("%f", &nilai_test[i]);
		//Menghitung jumlah seluruh nilai
		total = total + nilai_test[i];
	}
	rata = total / MASK;		//Hitung nilai rata-rata
	
	//Cetak nilai rata-rata
	printf("\nNilai rata-rata = %g\n", rata);
}
