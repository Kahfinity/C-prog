/*
	File Program : union1.c
	Contoh pendeklarasian dan pengaksesan variable union
*/

#include <stdio.h>

int main()
{
	union 
	{
		unsigned int di;
		unsigned char dc[2];
	}bil_x; // Variable union
	
	bil_x.di = 321;
	
	printf("di = %d\n", bil_x.di);
	printf("dc[0] = %d dc[1] = %d\n", bil_x.dc[0], 
													bil_x.dc[1] );
}
