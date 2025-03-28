/*
	File Program : salinstr.c
		Contoh menyalin suatu string
*/

#include <stdio.h>
#define MASK 30

int main()
{
	int i;
	char asal[] = "Saya menyukai bahasa C";
	char hasil[MASK];
	
	i = 0;
	while(asal[i] != '\0')
	{
		hasil[i] = asal[i];
		i++;
	}
	hasil[i] = '\0'; // beri krakter NULL
	printf("Isi Hasil = %s\n", hasil);
}
