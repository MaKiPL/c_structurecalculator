// C_StructureCalculator.cpp : Defines the entry point for the console application.
//

#include <stdio.h>


int main()
{
	while (true)
	{
		printf("Input the number to find probably structures: ");
		unsigned int number;
		scanf("%d", &number);
		printf("\nFound structures are:\n");
		for (int i = 1; i != 256; i++)
			if ((number%i) == 0)
				printf("Size:\t%d\n", i);
	}

    return 0;
}

