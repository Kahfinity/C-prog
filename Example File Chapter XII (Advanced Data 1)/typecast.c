/*
	File Program : typecast.c
	Melihat efek cast dalam konversi tipe
*/

#include <stdio.h>

int main()
{
	int x = 21;
	float y;
	
	y = x/2;
	printf("y = x/2							=	%f\n", y);
	
	y = (float) x/2;
	printf("y = (float) x/2					=	%f\n", y);
	
	y = (float) (x/2);
	printf("y = (float) (x/2)				=	%f\n", y);
}
