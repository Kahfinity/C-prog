/*
	Format program : Lingkaran.c
		Menghitung keliling dan luas lingkaran
*/

#include <stdio.h>

int main()
{
	float radius,keliling,luas;
	
		printf("Masukan jari-jari lingkaran : ");
			scanf("%1f", &radius);
	
	keliling = 2*3.14*radius; // PI = 3.14
	luas = 0.5*3.14*radius*radius;
	
		printf("\nData Lingkaran\n");
			printf("Jari-Jari		= %8.2lf\n", radius);
			printf("Keliling		= %8.2lf\n", keliling);
			printf("Luas			= %8.2lf\n", luas);
	
	return 0;
}
