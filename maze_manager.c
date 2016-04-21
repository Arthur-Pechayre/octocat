/*                                                                                                          
** maze_manager.c for maze_manager.c in /home/pechay_a/Desk/octocat/maze_manager.c                       
**                                                                                                          
** Made by PECHAYRE Arthur                                                                                  
** Login   <pechay_a@etna-alternance.net>                                                                   
**                                                                                                          
** Started on  Mon Jan  18 09:00:00 2015 PECHAYRE Arthur                                                     
** Last update Fri Jan  22 16:59:59 2015 PECHAYRE Arthur                                                     
*/

#include "libmy/libmy.h"
#include "head.h"

char**  create_filled_maze(int l, int c)
{
    char**  maze;
    int     x;
    int     y;

    maze = malloc((l + 4) * sizeof(char*));
    for (x = 0; x != (l + 4); x++)
    {
        maze[x] = malloc(c + 4);
        if (x == 0 || x == l + 2 || x == 1 || x == l + 3)
        {
           for (y = 0; y != (c + 4); y++)
                maze[x][y] = '-';
        }
        else
        {
            for (y = 0; y != (c + 4); y++)
            {
                if (y == 0 || y == (c + 2) || y == 1 || y == (c + 3))
                    maze[x][y] = '|';
                else
                    maze[x][y] = 'X';
            }
        }
    }
    return(maze);
}

char**  rand_maze(char** maze, int l, int c)
{
    t_pile*         pile;
    int             x;
    int             y;
    t_item_pile    neo_start;

    pile = init_stack();
    x = l + 1;
    y = c + 1;
    maze[x][y] = '.';
    stack(pile, x, y);
    my_putstr("Random maze generation, please wait\n");
    while (pile->first != NULL)
    {
        if (maze[x + 2][y] == 'X' || maze[x - 2][y] == 'X' || maze[x][y + 2] == 'X' || maze[x][y - 2] == 'X')
            move_algo(&x, &y, maze, pile);
        else
        {
            neo_start = destack(pile);
            x = neo_start.x;
            y = neo_start.y;
        }
        my_putchar('.');
    }
    maze[2][2] = '8';
    return(maze);
}

int*     nb_rand(int seed)
{   
    int     temp;
    int*    array;
    int     randomIndex;

    array = malloc(4 * sizeof(temp));
    srand(time(NULL) + seed);
    for (int i = 0; i < 4; i++)
        array[i] = i;
    for (int i = 0; i < 4; i++)
    {
        temp = array[i];
        randomIndex = rand() % 4;
        array[i] = array[randomIndex];
        array[randomIndex] = temp;
    }
    return(array);
}
