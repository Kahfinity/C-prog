/*
	File Program : inisial.c
*/


#include <stdio.h>
int main()
{
	int i;
	int values[] = {1,2,3,4,5,6,7,8,9};
	char world[] = {'H','e','l','l','o'};
	
	for(i = 0;i < 9;++i)
		printf("values[%d] is %d\n", i, values[i]);
	
	printf("\n");
	for(i = 0;i < 5;++i)
		printf("values[%d] is %c\n", i, world[i]);
}
