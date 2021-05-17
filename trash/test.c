#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

void    print_arr(int **stack)
{
    int i;

    i = 1;
    printf("N@  %i  dP          N@  %i  dP\n", data.elements_a, data.elements_b);
    printf("------------------------------\n");
    while(i <= data.elements_a || i <= data.elements_b)
    { 
        printf("%i*  %i  [%i]       %i*  %i  [%i]\n", stack[i][0], stack[i][1], stack[i][2], stack[i][3], stack[i][4], stack[i][5]);
        i++;
    }
    printf("------------------------------\n");
}

int     main(int argc, char **argv)
{
    int size;
    int **stack;
    int i;

    size = argc;
    stack = (int**)calloc(size, sizeof(int*));

    i = 0;
    while(i < size)
    {
        stack[i] = (int*)calloc(6, sizeof(int));
        i++;
    }

    //Callock check success

    if (stack == '\0')
        printf("calloc failed\n");

    //Transform argc in int
    //and add pos values to 2d array

   i = 1;
    while(i < size)
    {
        stack[i][1] = atoi(argv[i]);
        stack[i][0] = i;
        stack[i][3] = i;
        i++;
    }

    //Give value to the number of elements

    data.elements_a = size - 1;
	data.elements_b = 0;


    printf(">-arr size = %i\n", data.elements_a);
    print_arr(stack);
	return(0);
}
