/*
	File program : pre_post
		contoh penggunaan pre & post Increment oprator
*/

#include <stdio.h>

int main()
{
	int count = 0, loop;
	
		loop = ++count; // count=count+1; loop=count;
	printf("loop = %d, count = %d\n", loop,count);
	
		loop = count++; // loop=count; count=count+1
	printf("loop = %d, count = %d\n", loop,count);
	
	return 0;
}
