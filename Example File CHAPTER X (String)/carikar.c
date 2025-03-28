/*
	File program : carikar.c
		Contoh mencari karakter dalam sebuah string
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "ABcde";		//inisialisasi string
	char *hasil1,*hasil2;
	
	/*
	Var bertipe pointer to char, agar bisa ditampilkan isi
	dari alamat yang ditunjuk oleh hasil1 dan hasil2
	*/
	
	hasil1 = strchr(str, 'B');
	hasil2 = strchr(str, 'X');
	
	printf("Dari string ABcde\n");
	printf("\nMencari Karakter B = %s\n", hasil1);
	printf("Mencari Karakter X = %s\n", hasil2);
}
