/*
	File program : diskriminan1.c
		Program untuk menghitung diskriminan dan akar-akar persamaan kuadrat menggunakan if bersarang
*/

#include <stdio.h>

int main()
{
	float  a , b , c , d = 0;
	double x1 , x2 , imaginair;
	
	printf("MENCARI PERSAMAAN KUADRAT a+bx+c = 0\n");
	printf("Masukan nilai a : ");
		scanf("%f", &a);
	printf("Masukan nilak b : ");
		scanf("%f", &b);
	printf("Masukan nilai c : ");
		scanf("%f", &c);
	
	d = b*b-4*a*c; //Menghitung diskriminan
	
	if(d >= 0)
		if(d == 0)
			{
				x1 = -b / (2 * a);
					printf("\nDua Akar Real Kembar Yaitu :\n");
					printf("x1 = x2 = %g\n", x1);
			}
			
		else
			{
				x1 = (-b + sqrt (d))/(2*a);
				x2 = (-b - sqrt (d))/(2*a);
				
				printf("\nDua Akar Real Berlainan Yaitu :\n");
				printf("x1 = %g\n", x1);
				printf("x2 = %g\n", x2);	
			}
			
		else
			{
				imaginair = (sqrt(-d)/(2*a));
				x1 = -b/(2*a);
		 printf("\nDua Akar Imigranir Berlainan Yaitu :\n");
		 printf("x1 = %g + %gi\n", x1, imaginair);
		 printf("x2 = %g + %gi\n", x1, imaginair);
		}
			
	return 0;
}
