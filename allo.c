
#include "push_swap.h"

// int		alloc(int argc, char **argv)
// {
// 	int size;
//     int **stack;
//     int i;

//     size = argc;
//     stack = (int**)calloc(size, sizeof(int*));

//     i = 0;
//     while(i < size)
//     {
//         stack[i] = (int*)calloc(6, sizeof(int));
//         i++;
//     }

//     //Callock check success

//     if (stack == '\0')
//         printf("calloc failed\n");

//     //Transform argc in int
//     //and add pos values to 2d array

//    i = 1;
//     while(i < size)
//     {
//         stack[i][1] = atoi(argv[i]);
//         stack[i][0] = i;
//         stack[i][3] = i;
//         i++;
//     }

//     //Give value to the number of elements

//     stack[0][0] = size - 1;
// 	stack[0][1] = 0;

//     return(0);
// }
