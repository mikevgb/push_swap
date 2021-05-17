/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 19:53:16 by mvillaes          #+#    #+#             */
/*   Updated: 2021/05/17 22:27:03 by mvillaes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     dp_calc(int **stack, int **move)
{
    if(data.elements_a > 1)
    {
        index_calc(stack);
        move_compare(stack, move);
        // c_sa(stack);
        // index_calculator(stack);
    }

    // if(data.elements_b > 1)
    // {
    //     pos_calculator(stack);
    //     calc_moves(stack);
    //     ft_abs(stack);
    //     sum_move(stack);
    // }
}

void    reset_move(int **move)
{
    int i;

    i = 1;
    while(i < 12)
    {
        move[i][0] = 333333;
        move[i][1] = 333333;
        i++;
    }    
}

void    compare_a(int **stack, int **move)
{
    sa(stack);
    index_calc(stack);
    move[1][0] = data.total;
    sa(stack); //undo
    index_calc(stack);

    ra(stack);
    index_calc(stack);
    move[2][0] = data.total;
    rra(stack); //undo
    index_calc(stack);

    pb(stack);
    index_calc(stack);
    move[3][0] = data.total + 1;
    pa(stack); //undo
    index_calc(stack);

    rra(stack);
    index_calc(stack);
    move[4][0] = data.total;
    ra(stack); //undo
    index_calc(stack);
}

void    compare_b(int **stack, int **move)
{
    sb(stack);
    index_calc(stack);
    move[5][0] = data.total;
    sb(stack); //undo
    index_calc(stack);

    rrb(stack);
    index_calc(stack);
    move[6][0] = data.total;
    rb(stack); //undo
    index_calc(stack);

    pa(stack);
    index_calc(stack);
    move[7][0] = data.total;
    pb(stack); //undo
    index_calc(stack); 

    rb(stack);
    index_calc(stack);
    move[8][0] = data.total;
    rrb(stack); //undo
    index_calc(stack);
}

void    compare_double(int **stack, int **move)
{
    rr(stack);
    index_calc(stack);
    move[9][0] = data.total;
    rrr(stack); //undo
    index_calc(stack);

    rrr(stack);
    index_calc(stack);
    move[10][0] = data.total;
    rr(stack); //undo
    index_calc(stack); 

    ss(stack);
    index_calc(stack);
    move[11][0] = data.total;
    ss(stack); //undo
    index_calc(stack);
}

void    clean_equal(int **move)
{
    int i;
    int j;

    i = 1;
    j = 2;
    while(i < 11 && j < 11)
    {
        if(move[i][1] == move[j][1])
        move[j][1] = 333333;
        i++;
        j++;
    }
}

void    choose_less(int **move)
{
    int i;
    int j;

    i = 1;
    j = 2;
    while(i < 11 && j < 11)
    {
        if (move[i][0] < move[j][0])
            move[i][1] = 1;
        i++;
        j++;
    }
    i = 1;
    j = 2;
    while(i < 11 && j < 11)
    {
        if (move[i][0] == move[j][0])
            move[i][1] = 2;
        i++;
        j++;
    }
    clean_equal(move);   
}

void    move_compare(int **stack, int **move)
{
    int i;

    i = 1; //start in 1 because we use 0 as reference of max moves allowed
    while(data.total > 0 || data.elements_b > 0)
    {
        // printf("data total %i\n", data.total);
        reset_move(move);
        index_calc(stack);
        // if(data.elements_b > 0) //stack B
        //     compare_b(stack, move);
        
        if(data.elements_a > 0) //stack A
            compare_a(stack, move);

        // if(data.elements_a > 0 && data.elements_b > 0)
        //     compare_double(stack, move);
        
        choose_less(move);
        int x = 1;
        while(x < 12)
        {
            printf("index a %i index b %i \n", data.elements_a, data.elements_b);
            printf("move %i|1 = %i\n", x, move[x][1]);
            x++;
        }


        if(move[1][1] == 1)
        {
            sa(stack);
            printf("sa\n");
            index_calc(stack);
            data.moves += 1;
            reset_move(move);
        }

        if(move[2][1] == 1)
        {
            ra(stack);
            printf("ra\n");
            index_calc(stack);
            data.moves += 1;
            reset_move(move);
        }
            
        if(move[3][1] == 1)
        {
            pb(stack);
            printf("pb\n");
            index_calc(stack);
            data.moves += 1;
            reset_move(move);
        }
            
        if(move[4][1] == 1)
        {
            rra(stack);
            printf("rra\n");
            index_calc(stack);
            data.moves += 1;
            reset_move(move);
        }
            
        if(move[5][1] == 1)
        {
            sb(stack);
            printf("sb\n");
            index_calc(stack);
            data.moves += 1;
            reset_move(move);
        }
            
        if(move[6][1] == 1)
        {
            rrb(stack);
            printf("rrb\n");
            index_calc(stack);
            data.moves += 1;
            reset_move(move);
        }
            
        if(move[7][1] == 1)
        {
            pa(stack);
            printf("pa\n");
            index_calc(stack);
            data.moves += 1;
            reset_move(move);
        }
            
        if(move[8][1] == 1)
        {
            rb(stack);
            printf("rb\n");
            index_calc(stack);
            data.moves += 1;
            reset_move(move);
        }
            
        if(move[9][1] == 1)
        {
            rr(stack);
            printf("rr\n");
            index_calc(stack);
            data.moves += 1;
            reset_move(move);
        }
            
        if(move[10][1] == 1)
        {
            rrr(stack);
            printf("rrr\n");
            index_calc(stack);
            data.moves += 1;
            reset_move(move);
        }
            
        if(move[11][1] == 1)
        {
            ss(stack);
            printf("ss\n");
            index_calc(stack);
            data.moves += 1;
            reset_move(move);
        }
        
            

        reset_move(move);
        if(data.total == 0)
            break;


        
        
        // if(move[1]<= move[5]&& move[1]<= move[11]&& move[1]<= move[4]&& move[1]<= move[6]&& move[1]<= move[7]&& move[1]<= move[3] && move[1]<= move[8]&& move[1]<= move[9]&& move[1]<= data.rrr)
        // {
        //     printf("Best move is sa with dP %i\n", data.ra);
        //     sa(stack);
        //     data.moves += 1; //move counter
        //     // move[i] = 1;
        // }
            
        // else if(move[5]<= move[1]&& move[5]<= move[11]&& move[5]<= move[4]&& move[5]<= move[6]&& move[5]<= move[7]&& move[5]<= move[3] && move[5]<= move[8]&& move[5]<= move[9]&& move[5]<= data.rrr)
        // {
        //     printf("Best move is sb with dP %i\n", data.sa);
        //     sb(stack);
        //     data.moves += 1;
        //     // move[i] = 2;
        // }
            
        // else if(move[11]<= move[1]&& move[11]<= move[5]&& move[11]<= move[4]&& move[11]<= move[6]&& move[11]<= move[7]&& move[11]<= move[3] && move[11]<= move[8]&& move[11]<= move[9]&& move[11]<= data.rrr)
        // {
        //     printf("Best move is ss with dP %i\n", data.rra);
        //     ss(stack);
        //     data.moves += 1;
        //     // move[i] = 3;
        // }

        // else if(move[2]<= move[1]&& move[2]<= move[11]&& move[2]<= move[4]&& move[2]<= move[6]&& move[2]<= move[7]&& move[2]<= move[3] && move[2]<= move[8]&& move[2]<= move[9]&& move[2]<= data.rrr)
        // {
        //     printf("Best move is ra with dP %i\n", move[3]);
        //     ra(stack);
        //     data.moves += 1;
        //     // move[i] = 4;
        // }

        // else if(move[4]<= move[1]&& move[4]<= move[11]&& move[4]<= move[2]&& move[4]<= move[6]&& move[4]<= move[7]&& move[4]<= move[3] && move[4]<= move[8]&& move[4]<= move[9]&& move[4]<= data.rrr)
        // {
        //     printf("Best move is rra with dP %i\n", move[3]);
        //     rra(stack);
        //     data.moves += 1;
        //     // move[i] = 6;
        // }

        // else if(move[6]<= move[1]&& move[6]<= move[11]&& move[6]<=move[2]&& move[6]<= move[4]&& move[6]<= move[7]&& move[6]<= move[3] && move[6]<= move[8]&& move[6]<= move[9]&& move[6]<= data.rrr)
        // {
        //     printf("Best move is rrb with dP %i\n", move[3]);
        //     rrb(stack);
        //     data.moves += 1;
        //     // move[i] = 7;
        // }

        // else if(move[7]<= move[1]&& move[7]<= move[11]&& move[7]<= move[2]&& move[7]<= move[4]&& move[7]<= move[6]&& move[7]<= move[3] && move[7]<= move[8]&& move[7]<= move[9]&& move[7]<= data.rrr)
        // {
        //     printf("Best move is pa with dP %i\n", move[3]);
        //     pa(stack);
        //     data.moves += 1;
        //     // move[i] = 8;
        // }

        // else if(move[3] <= move[1]&& move[3] <= move[11]&& move[3] <=move[2]&& move[3] <= move[4]&& move[3] <= move[6]&& move[3] <= move[7]&& move[3] <= move[8]&& move[3] <= move[9]&& move[3] <= data.rrr)
        // {
        //     printf("Best move is pb with dP %i\n", move[3]);
        //     pb(stack);
        //     data.moves += 1;
        //     // move[i] = 9;
        // }

        // else if(move[8]<= move[1]&& move[8]<= move[11]&& move[8]<=move[2]&& move[8]<= move[4]&& move[8]<= move[6]&& move[8]<= move[7]&& move[8]<= move[3] && move[8]<= move[9]&& move[8]<= data.rrr)
        // {
        //     printf("Best move is rb with dP %i\n", move[3]);
        //     rb(stack);
        //     data.moves += 1;
        //     // move[i] = 5;
        // }

        // else if(move[9]<= move[1]&& move[9]<= move[11]&& move[9]<=move[2]&& move[9]<= move[4]&& move[9]<= move[6]&& move[9]<= move[7]&& move[9]<= move[3] && move[9]<= move[8]&& move[9]<= data.rrr)
        // {
        //     printf("Best move is rr with dP %i\n", move[3]);
        //     rr(stack);
        //     data.moves += 1;
        //     // move[i] = 5;
        // }

        // else if(move[10]<= move[1]&& move[10]<= move[11]&& move[10]<=move[2]&& move[10]<= move[4]&& move[10]<= move[6]&& move[10]<= move[7]&& move[10]<= move[3] && move[10]<= move[8]&& move[10]<= data.rr)
        // {
        //     printf("Best move is rrr with dP %i\n", move[3]);
        //     rrr(stack);
        //     data.moves += 1;
        //     // move[i] = 5;
        // }
        // index_calc(stack);
        

        if(data.moves >= data.max_moves)
        {
            printf("exit! moves 1\n");
            break; 
        }
        i++;
    }
    
    while(data.index_b == 0 && data.elements_b > 0)
    {
        pa(stack);
        index_calc(stack);
        if(data.moves >= data.max_moves)
        {
            printf("exit! moves 2\n");
            break; 
        }
        i++;
    }
}
