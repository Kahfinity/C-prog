/*
	File program : bagi.c
		pemakaian if-else menyeleksi bilangan pembagi
*/

#include <stdio.h>

int main()
{
	float a , b;
	
	printf("Masukan nilai a : ");
		scanf("%f", &a);
	printf("Masukan nilai b : ");
		scanf("%f", &b);
	
 if(b == 0)
	printf("\n%g dibagi dengan nol = TAK BERHINGGA\n", a);
 else
 	printf("\n%g dibagi dengan %g = %.2g\n", a , b , a/b);
 
	return 0;
}
