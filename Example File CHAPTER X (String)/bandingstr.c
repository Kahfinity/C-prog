/*
	File program : bandingstr.c
		Contoh membandingkan isi dua buah string
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "HALO";
	char str2[] = "Halo";
	char str3[] = "HALO";
	
	printf("Hasil pembandingan %s dengan %s ---> %d\n",
				str1,str2, strcmp(str1, str2));
	
	printf("Hasil pembandingan %s dengan %s ---> %d\n",
				str2,str1, strcmp(str2, str1));
	
	printf("Hasil pembandingan %s dengan %s ---> %d\n",
				str1,str3, strcmp(str1, str3));
}
