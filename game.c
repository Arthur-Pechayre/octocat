/*                                                                                                          
** game.c for game.c in /home/pechay_a/Desk/octocat/game.c                            
**                                                                                                          
** Made by PECHAYRE Arthur                                                                                  
** Login   <pechay_a@etna-alternance.net>                                                                   
**                                                                                                          
** Started on  Mon Jan  18 09:00:00 2015 PECHAYRE Arthur                                                     
** Last update Fri Jan  22 16:59:59 2015 PECHAYRE Arthur                                                     
*/

#include "libmy/libmy.h"
#include "head.h"

t_octocat	init_octocat(char** maze)
{	
	t_octocat 	infos;
	int 		x;
	int 		y;
	int 		keep;

	y = 0;
	keep = 1;
	for (x = 2; (maze[x][2] != '-') && (keep == 1); ++x)
	{
		for (y = 2; (maze[x][y] != '|') && (keep == 1); ++y)
		{
			if (maze[x][y] == '8')
			{
				infos.pos_x = x;
				infos.pos_y = y;	
				keep = 0;
			}	
		}
	}
	return(infos);
}

int		game_casu(int l, int c)
{
	char** 		maze;	
	t_octocat 	infos;
	int 		keep;

	maze = rand_maze(create_filled_maze(l, c), l, c);
	keep = 1;
	do
	{	
		print_raw_maze(maze, l, c);
		infos = init_octocat(maze);
		if (keep == 0)
			print_help();
		maze_menu();
		keep = menu_check(getchar(), infos, maze);
		clear_getchar();
	} while (keep != -1 && keep != -3 && keep != -2);
	return(1);
}

int 	game_hard(int l, int c)
{
	char** 		maze;	
	t_octocat 	infos;
	int 		keep;
	char*		str;
	int 		i;

	maze = rand_maze(create_filled_maze(l, c), l, c);
	print_raw_maze(maze, l, c);
	maze_menu_hard();
	str = readLine();
	keep = 1;
	for (i = 0; str[i] != '\0' && keep != -3 && keep != -1; i++)
	{
		infos = init_octocat(maze);
		print_raw_maze(maze, l, c);
		keep = menu_check(str[i], infos, maze);
		usleep(80000);
	}
	if ((keep == 1 && str[i] == '\0') && maze[infos.pos_x][infos.pos_y] != '.')
		my_putstr("Cette séquence ne permet pas de sortir du labyrinthe. Vous avez été mangé par un Grievers !\n\n");
	return(1);
}

int		game_blind(int l, int c)
{
	char** 		maze;	
	t_octocat 	infos;
	int 		keep;

	maze = rand_maze(create_filled_maze(l, c), l, c);
	keep = 1;
	do
	{	
		infos = init_octocat(maze);
		print_blind_maze(maze, l, c);
		if (keep == 0)
			print_help();
		maze_menu_blind();
		keep = menu_check(getchar(), infos, maze);
		clear_getchar();
	} while (keep != -2 && keep != -1);
	return(1);
}

int		game_octoview(int l, int c)
{
	char** 		maze;	
	t_octocat 	infos;
	int 		keep;

	maze = rand_maze(create_filled_maze(l, c), l, c);
	keep = 1;
	do
	{	
		infos = init_octocat(maze);
		print_octo_maze(maze, l, c, infos);
		if (keep == 0)
			print_help();
		maze_menu_blind();
		keep = menu_check(getchar(), infos, maze);
		clear_getchar();
	} while (keep != -1 && keep != -3);
	return(1);
}
