// Program : ptr1.c

#include <stdio.h>

int main()
{
	int y,x = 87;				// x dan y bertipe int
	int *px;
	// Var pointer yang menunjuk ke data yang bertipe int
	
	px = &x;  // px diisi dengan alamat variable x
	y 	= *px; //y diisi dengan nilai yang ditunjuk oleh *px
	
	printf("Alamat x		= %p\n", &x);
	printf("Isi px			= %p\n", px);
	printf("Isi x			= %d\n", x);
	printf("Nilai yang ditunjuk oleh px = %d\n", *px);
	printf("Nilai y		= %d\n", y);
}
