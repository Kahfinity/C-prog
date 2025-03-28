/*
	File program : gabungstr.c
		Contoh menggabungkan string1 dengan string2
*/

#include <stdio.h>
#include <string.h>
#define PJG 5

int main()
{
	char str1[PJG],str2[PJG];
	
	strcpy(str1, "sala");  //str1 diisi sala
	strcpy(str2, "tiga"); //str2 diisi tiga
	
	strcat(str1, str2); //tambahkan str2 ke akhir str1
	
	printf("\nstr1 -> %s			str2 -> %s\n", str1,str2);
}
