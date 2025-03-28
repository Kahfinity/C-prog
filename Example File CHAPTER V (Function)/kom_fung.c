/*
	File program : kom_fung
		contoh fungsi untuk memanggil fungsi lain
*/

#include <stdio.h>

void fungsi_1(void);
void fungsi_2(void);

int main()
{
	fungsi_1();
}
void fungsi_1()
{
	puts("fungsi 1 dijalankan");
	fungsi_2();
}
void fungsi_2()
{
	puts("fungsi 2 dijalankan");
}
