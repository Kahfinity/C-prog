/*
	File program : discount.c
		contoh penggunaan if untuk menghitung nilai discount
*/


#include <stdio.h>

int main()

{
	double total_pembelian , discount = 0;
	// Discount diinisialisasikan dengan nilai 0
	
	printf("Total pembelian = Rp ");
		scanf("%lf", &total_pembelian);
	
	if(total_pembelian >= 100000)
	
		discount = 0.05*total_pembelian;
	
	printf("Besarnya discount = Rp %.2lf\n ", discount);
	
	return 0;
}
