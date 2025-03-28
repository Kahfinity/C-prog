/*
	File Program : ganjil.c
		Menampilkan bilangan ganjil 7 - 25 kecuali 15
*/

#include <stdio.h>

int main()
{
	int x;
	for(x = 7;x <= 25;x += 2)
	{
		if (x == 15)
		continue;
		printf("%4d", x);
	}
	
	printf("\n");
	
	return 0;
}
