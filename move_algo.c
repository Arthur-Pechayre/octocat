/*                                                                                                          
** move_algo.c for move_algo.c in /home/pechay_a/Desk/octocat/move_algo.c                            
**                                                                                                          
** Made by PECHAYRE Arthur                                                                                  
** Login   <pechay_a@etna-alternance.net>                                                                   
**                                                                                                          
** Started on  Mon Jan  18 09:00:00 2015 PECHAYRE Arthur                                                     
** Last update Fri Jan  22 16:59:59 2015 PECHAYRE Arthur                                                     
*/

#include "libmy/libmy.h"
#include "head.h"

void 	move_algo_up(int* x, int* y, char** maze, t_pile* pile)
{
	maze[*x - 1][*y] = ' ';
    maze[*x - 2][*y] = ' ';
    if (maze[*x][*y] != '.')
    	stack(pile, *x, *y);
    *x = *x - 2;
}

void 	move_algo_down(int* x, int* y, char** maze, t_pile* pile)
{
	maze[*x + 1][*y] = ' ';
    maze[*x + 2][*y] = ' ';
    if (maze[*x][*y] != '.')
    	stack(pile, *x, *y);
    *x = *x + 2;
}

void 	move_algo_left(int* x, int* y, char** maze, t_pile* pile)
{
	maze[*x][*y - 1] = ' ';
    maze[*x][*y - 2] = ' ';
    if (maze[*x][*y] != '.')
    	stack(pile, *x, *y);
    *y = *y - 2;
}

void 	move_algo_right(int* x, int* y, char** maze, t_pile* pile)
{
	maze[*x][*y + 1] = ' ';
    maze[*x][*y + 2] = ' ';
    if (maze[*x][*y] != '.')
    	stack(pile, *x, *y);
    *y = *y + 2;
}

void    move_algo(int* x, int* y, char** maze, t_pile* pile)
{
    int*     ran;
    int      i;

    ran = nb_rand(*x + *y + (sizeof(pile) * 3));
    for (i = 0; i != 4; i++)
    {
        if (ran[i] == 0 && maze[*x - 2][*y] == 'X')
            move_algo_up(x, y, maze, pile);
        else if (ran[i] == 1 && maze[*x + 2][*y] == 'X')
            move_algo_down(x, y, maze, pile);
        else if (ran[i] == 2 && maze[*x][*y - 2] == 'X')
            move_algo_left(x, y, maze, pile);
        else if (ran[i] == 3 && maze[*x][*y + 2] == 'X')
            move_algo_right(x, y, maze, pile);
    }
}
