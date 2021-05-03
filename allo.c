
#include "push_swap.h"

int		alloc(int argc, char **argv)
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
}
