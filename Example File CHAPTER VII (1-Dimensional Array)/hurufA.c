﻿/*
	File Program : hurufA.c
		contoh inisialisasi array dimensi dua
*/

#include <stdio.h>
main()
{
	int i,j;
	int huruf_A[8][8] =
	{	{0, 1, 1, 1, 1, 1, 0, 0},
		{0, 1, 0, 0, 0, 1, 0, 0},
		{0, 1, 0, 0, 0, 1, 0, 0},
		{1, 1, 1, 1, 1, 1, 1, 0},
		{1, 1, 0, 0, 0, 0, 1, 0},
		{1, 1, 0, 0, 0, 0, 1, 0},
		{1, 1, 0, 0, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 0, 0, 0}};
	
	for(i = 0;i < 8; i++)
	{
		for(j = 0;j < 8; j++)
			if(huruf_A[i][j] != 0)
				putchar('1');
			else
					putchar(' ');
			putchar('\n');
	}
}
