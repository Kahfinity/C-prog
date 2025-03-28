/*
	File program : jumkar.c
		Menghitung jumlah kata dan karakter dalam satu kalimat
*/

#include <stdio.h>

main()
{
	char kar;
	int jumkar = 0, jumspasi = 0;
puts("Masukan sebuah kalimat dan akhiri dengan ENTER.\n");
puts("Saya akan menghitung jumlah karakter");	
puts("Pada kalimat tersebut.\n");
	while((kar = getchar()) != '\n')
	{
		jumkar++;
		
	   if (kar == ' ') jumspasi++;	
	}	
	printf("\nJumlah Karakter = %d", jumkar);
	printf("\nJumlah Spasi	= %d\n\n", jumspasi);
	
	return 0;	
}
