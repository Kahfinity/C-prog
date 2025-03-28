/* File program : diskrim.c 
		Menghitung diskriminan pers kuadrat 
			ax^2 + bx + c = 0
*/


#include <stdio.h>

int main()
{
	float a,b,c,d;
	
		a = 3.0f;
		b = 4.0f;
		c = 7.0f;
	
	d = b*b-4*a*c;
	
		printf("Diskriminan = %f\n", d);
	
	return 0;
}
