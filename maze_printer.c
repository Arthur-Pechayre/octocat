/*                                                                                                          
** maze_printer.c for maze_printer.c in /home/pechay_a/Desk/octocat/maze_printer.c                       
**                                                                                                          
** Made by PECHAYRE Arthur                                                                                  
** Login   <pechay_a@etna-alternance.net>                                                                   
**                                                                                                          
** Started on  Mon Jan  18 09:00:00 2015 PECHAYRE Arthur                                                     
** Last update Fri Jan  22 16:59:59 2015 PECHAYRE Arthur                                                     
*/

#include "libmy/libmy.h"
#include "head.h"

void    print_raw_maze(char** maze, int l, int c)
{
    int     x;
    int     y;

    my_putstr("\033c\n\n\n");
    for (x = 0; x < (l + 4); x++)
    {
    	my_putstr("\t");
        for (y = 0; y < (c + 4); y++)
        {
        	if (maze[x][y] == '-' || maze[x][y] == '|' || maze[x][y] == 'X')
        		my_putstr(MUR_BG);
        	else if (maze[x][y] == '.')
            	my_putstr(SORTIE_BG);
            else
            	my_putchar(maze[x][y]);
        }
        my_putchar('\n');
    }
}

void    print_blind_maze(char** maze, int l, int c)
{
    int     x;
    int     y;

    my_putstr("\033c\n\n\n");
    for (x = 0; x < (l + 4); x++)
    {
    	my_putstr("\t");
        for (y = 0; y < (c + 4); y++)
        {
        	if (maze[x][y] == '8' || maze[x][y] == '-' ||
        		maze[x][y] == '|' || maze[x][y] == '.')
            	my_putchar(maze[x][y]);
            else
            	my_putchar(' ');
        }
        my_putchar('\n');
    }
}

void    print_octo_maze(char** maze, int l, int c, t_octocat infos)
{
    int     x;
    int     y;

    my_putstr("\033c\n\n\n");
    for (x = 0; x < (l + 4); x++)
    {
    	my_putstr("\t");
        for (y = 0; y < (c + 4); y++)
        {
        	if (((x == infos.pos_x) &&
        		 (y == infos.pos_y || y == infos.pos_y - 1 || y == infos.pos_y + 1)) ||
        		((x == infos.pos_x - 1) &&
        	     (y == infos.pos_y || y == infos.pos_y - 1 || y == infos.pos_y + 1)) ||
        		((x == infos.pos_x + 1) &&
        		 (y == infos.pos_y || y == infos.pos_y - 1 || y == infos.pos_y + 1)))
        		my_putchar(maze[x][y]);
            else if (maze[x][y] == '-' || maze[x][y] == '|')
            	my_putstr(MUR_BG);
            else
            	my_putchar(' ');
        }
        my_putchar('\n');
    }
}
