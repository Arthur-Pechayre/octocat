/*                                                                                                          
** manage_maze.c for manage_maze.c in /home/pechay_a/Desk/octocat/manage_maze.c                            
**                                                                                                          
** Made by PECHAYRE Arthur                                                                                  
** Login   <pechay_a@etna-alternance.net>                                                                   
**                                                                                                          
** Started on  Mon Jan  18 09:00:00 2015 PECHAYRE Arthur                                                     
** Last update Fri Jan  22 16:59:59 2015 PECHAYRE Arthur                                                     
*/

/**********************************************************************
*																	  *
*	// ! \\ DEPRECATED VERSION, LOOK maze_manager.c INSTEAD // ! \\   *
*																	  *
**********************************************************************/

#include "libmy/libmy.h"
#include "head.h"

char**	give_maze_tab()		
{
	char** 		maze;
	int 		i;
	int 		j;
	char 		amazing[11][11] = {
		{"XXXXXXXXX\n"}, {"8 XX    .\n"}, {"X XXXXX X\n"},
		{"X XXXXX X\n"}, {"X    XX X\n"}, {"XXXX XX X\n"},
		{"XXXX XX X\n"}, {"X       X\n"}, {"XXXXXXXXX\n"},
		{'E'}
	};

	if  ((maze = malloc(11 * sizeof(char*))) == NULL)
		my_putstr("Erreur");
	for (i = 0; i != 10; i++)
	{
		if ((maze[i] = malloc(18)) == NULL)
			my_putstr("Erreur");
		for (j = 0; amazing[i][j] != '\0'; ++j)
		{
			maze[i][j] = amazing[i][j];
		}
	}
	return(maze);
}

void	print_maze(char** maze)
{
	int 	i;

	i = 0;
	my_putstr("\033c");
	for (i = 0; maze[i][1] != '\0'; i++)
		my_putstr(maze[i]);
}

void	print_maze_blind(char** maze)
{
	int 	i;
	int		x;

	i = 0;
	my_putstr("\033c");
	for (i = 0; maze[i][1] != '\0'; i++)
	{
		if (maze[i] != 0)
   		for (x = 0; maze[i][x] != '\0'; x++)
      	{
      		if (maze[i][x] == '8')
				my_putchar(maze[i][x]);
			else if (maze[i][x] == '.')
				my_putchar('.');
			else
				my_putchar(' ');
    	}
    	my_putchar('\n');
	}
}

int		quit()
{
	return(0);
}
