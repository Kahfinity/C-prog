/*
	File program : from_efg
		perbedaan frmat %g , %e , %f
*/

#include <stdio.h>

int main()
{
	float x = 215000.0f;
	
		printf("Format e => %e\n", x);
		printf("Format f => %f\n", x);
		printf("Format g => %g\n", x);
	
	return 0;
}
