/*
	File Program : salinstr2.c
		Contoh menyalin str2 ke str1
*/

#include <stdio.h>
#include <string.h>
#define MASK 80

int main()
{
	char str1[MASK];
	char str2[] = "ABCDE";
	
	strcpy(str1, str2); //Menyalin isi str2 ke str1
	printf("String Pertama Adalah : %s\n", str1);
	printf("String Kedua Adalah	  : %s\n", str2);
}