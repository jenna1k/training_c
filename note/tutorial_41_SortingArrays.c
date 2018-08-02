#include <string.h>
#include <math.h>

int main()
{
	int i, temp, swapped;
	int howMany = 10;
	int goals[howMany];

	for (i = 0; i < howMany; i++)
	{
		goals[i] = ( rand() % 25 ) + 1;		// random score
	}

	printf("Original List\n");
	for (i = 0; i < howMany; i++)
	{
		printf("%d \n", goals[i]);		// print random score
	}

	while(1)			// 1 True
	{
		swapped = 0;

		for (i = 0; i < howMany-1; i++)		// compare
		{
			if (goals[i] > goals[i+1])
			{
				int temp = goals[i];		// store value in temp
				goals[i] = goals [i+1];
				goals[i+1] = temp;
				swapped = 1;				// keep doing
			}
		}


			if (swapped == 0)
			{
				break;
			}
	}

	printf("\nSorted List\n");		// print sorted list
	for (i=0; i<howMany; i++)
	{
		printf("%d \n", goals[i]);
	}

	return (0);
}

		
