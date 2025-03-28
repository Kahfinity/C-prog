/*
	File Program : hitkar.c
		Contoh untuk menghitung banyaknya karakter dari suatu string yang dimasukkan melaluli keyboard
*/

#include <stdio.h>
#define MASK 256

int main()
{
	int i, jumkar = 0;
	char text[MASK];
	
	puts("Masukkan suatu kalimat (Mask 256 karakter).");
	puts("Saya akan menghitung jumlah karakternya.\n");
	fgets(text, sizeof text, stdin); 
	
	for(i=0;text[i];i++)
		jumkar++;
	
	printf("\nJumlah karakter = %d\n", jumkar);
}