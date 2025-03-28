// Program : ptr2.c

#include <stdio.h>

int main()
{
	int *pu;
	int nu;
	int u = 1234;
	
	pu = &u;
	nu = *pu;
	
	printf("Alamat dari u 	 = %p\n", &u);
	printf("Isi pu			 = %p\n", pu);
	printf("Isi u			 = %p\n", u);
	printf("Nilai yang ditunjuk oleh pu = %d\n", *pu);
	printf("Nilai nu		 = %p\n", nu);
}
