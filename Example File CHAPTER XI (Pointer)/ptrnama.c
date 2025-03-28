/* Program : arrnama.c
	Menukarkan 	isi 2 string tanpa pemakaian pointer
*/

#include <stdio.h>
#include <string.h>

char *nama1 = "JAMES BOND";
char *nama2 = "HERCULE POIROT";
int main()
{
	char *namax;
	
	puts("SEMULA : ");
	printf("nama1 --> %s\n", nama1);
	// nama1 : pointer yang menunjuk ke string JAMES BOUND
	printf("nama2 --> %s\n", nama2);
	// nama2 : pointer yang menunjuk ke string HERCULE POIROT
	namax = nama1;
	nama1 = nama2;
	nama2 = namax;
	
	puts("KINI : ");
	printf("nama1 --> %s\n", nama1);
	printf("nama2 --> %s\n", nama2);
}
