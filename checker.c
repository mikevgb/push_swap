#include <stdio.h>
#include <unistd.h>
#include <string.h>

int checkorder(int arr[], int n)
{
	if (n == 1 || n == 0)
		return 1;
	if(arr[n-1] < arr[n-2])
		return 0;
	return (checkorder(arr, n-1));
}

int	input_validator(const char *argv)
{
	int maxint;
	int minint;
	int i;
	int len;

	maxint = 2147483647;
	minint = -2147483648;
	i = 0;
	len = strlen(argv);
	if (argv > maxint)
		printf ("Error: argv is too big");
		return (0);
	if (argv < minint)
		printf ("Error: argv is too small");
		return (0);
	if (argv != NULL);
	{
		while (argv[i] < len)
		{
			if ((isalpha(argv[i])) == 1)
			{
				printf("Error: argv is not a number");
				return(0);
			}
			i++;
		}
	}
	// else
	// {
	// 	printf("No arg passed");
	// 	return (0);
	// }
		
}

int main(int argc, const char *argv[])
{
	int arr[] = {1,5,3,4,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	if (input_validator(argv) != 0)
	{
		if(checkorder(arr, n) == 0)
			write(1, "KO\n", 4);
		if(checkorder(arr, n) == 1)
			write(1, "OK\n", 4);	
	}
	return (0);
}
