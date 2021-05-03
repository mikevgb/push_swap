#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

void    print_arr(int **stacks)
{
    int i;

    i = 1;
    printf("N@  %i  dP          N@  %i  dP\n", stacks[0][0], stacks[0][1]);
    printf("------------------------------\n");
    while(i <= stacks[0][0] || i <= stacks[0][1])
    { 
        printf("%i*  %i  [%i]       %i*  %i  [%i]\n", stacks[i][0], stacks[i][1], stacks[i][2], stacks[i][3], stacks[i][4], stacks[i][5]);
        i++;
    }
    printf("------------------------------\n");
}

int     main(int argc, char **argv)
{
    int size;
    int **stacks;
    int i;

    size = argc;
    stacks = (int**)calloc(size, sizeof(int*));

    i = 0;
    while(i < size)
    {
        stacks[i] = (int*)calloc(6, sizeof(int));
        i++;
    }

    //Callock check success

    if (stacks == '\0')
        printf("calloc failed\n");

    //Transform argc in int
    //and add pos values to 2d array

   i = 1;
    while(i < size)
    {
        stacks[i][1] = atoi(argv[i]);
        stacks[i][0] = i;
        stacks[i][3] = i;
        i++;
    }

    //Give value to the number of elements

    stacks[0][0] = size - 1;
	stacks[0][1] = 0;


    printf(">-arr size = %i\n", stacks[0][0]);
    print_arr(stacks);
	return(0);
}
