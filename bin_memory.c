#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)


int main432432432()
{

	FILE* f;

	int a = 190;
	int b = 290;
	int c = 390;


	f = fopen("data.bin", "w");

	if (f != NULL)
	{
		fwrite(&a, sizeof(int), 1, f);
		fwrite(&b, sizeof(int), 1, f);
		fwrite(&c, sizeof(int), 1, f);
		fclose(f);
	}
	else
	{
		// problem
		// error message
	}

	FILE* f1 = fopen("data.bin", "r");
	if (f != NULL)
	{
		int read = fread(&c, sizeof(int), 1, f1);
		printf("%d\t", c);

		fclose(f1);


	}
	else
	{
		// problem
		// error message
	}
	return 0;
}