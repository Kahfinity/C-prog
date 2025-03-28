/*
	File program : karkulator.c
		Contoh penggunaan else if untuk mengimplementasikan
		 program kalkulator sederhana
*/

#include <stdio.h>

int main()
{
	int vaild_operator = 1;
	// vaild_operator diinisialisasi dengan angka 1
	char operator;
	float number1, number2, result;
	
	
 printf("Masukan 2 buah bilangan dengan sebuah operator");
 printf("Dengan format : number1 operator number2\n\n");
 	scanf("%f %c %f", &number1, &operator, &number2);
 
 
 	if(operator == '*')
			result = number1 * number2;
		else if(operator == '/')
 					  result = number1 / number2;
 		else if(operator == '+')
 					  result = number1 + number2;
 		else if(operator == '-')
 					  result = number1 - number2;
 	else
 		vaild_operator = 0;
 
 	if(vaild_operator)
 		printf("\n%g %c %g = %g\n", number1, operator,number2, result);
 	else
 
 		printf("Invalid operator!\n");
 
  return 0;
}
