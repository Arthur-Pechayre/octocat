/*                                                                                                          
** move.c for move.c in /home/pechay_a/Desk/octocat/move.c                       
**                                                                                                          
** Made by PECHAYRE Arthur                                                                                  
** Login   <pechay_a@etna-alternance.net>                                                                   
**                                                                                                          
** Started on  Mon Jan  18 09:00:00 2015 PECHAYRE Arthur                                                     
** Last update Fri Jan  22 16:59:59 2015 PECHAYRE Arthur                                                     
*/

#include "libmy/libmy.h"
#include "head.h"

int		move_up(int x, int y, char** maze)
{
	char 	tmp;

	if (maze[x - 1][y] == 'X' || maze[x - 1][y] == '|' || maze[x - 1][y] == '-')
	{
		my_putstr("Vous avez heurté un mur! VOUS AVEZ PERDU !\n\n");
		return(-3);
	}
	else
	{
		tmp = maze[x][y];
		maze[x][y] = maze[x - 1][y];
		maze[x - 1][y] = tmp;
		if (maze[x][y] == '.')
		{
			my_putstr("Vous avez atteint la sortie du labyrinthe! VOUS GAGNEZ !\n\n");
			return(-1);
		}
		return(1);
	}
}

int		move_down(int x, int y, char** maze)
{
	char 	tmp;

	if (maze[x + 1][y] == 'X' || maze[x + 1][y] == '|' || maze[x + 1][y] == '-')
	{
		my_putstr("Vous avez heurté un mur! VOUS AVEZ PERDU !\n\n");
		return(-3);
	}
	else
	{
		tmp = maze[x][y];
		maze[x][y] = maze[x + 1][y];
		maze[x + 1][y] = tmp;
		if (maze[x][y] == '.')
		{
			my_putstr("Vous avez atteint la sortie du labyrinthe! VOUS GAGNEZ !\n\n");
			return(-1);
		}
		return(1);
	}
}

int		move_left(int x, int y, char** maze)
{
	char 	tmp;

	if (maze[x][y - 1] == 'X' || maze[x][y - 1] == '|' || maze[x][y - 1] == '-')
	{
		my_putstr("Vous avez heurté un mur! VOUS AVEZ PERDU !\n\n");
		return(-3);
	}
	else
	{
		tmp = maze[x][y];
		maze[x][y] = maze[x][y - 1];
		maze[x][y - 1] = tmp;
		if (maze[x][y] == '.')
		{
			my_putstr("Vous avez atteint la sortie du labyrinthe! VOUS GAGNEZ !\n\n");
			return(-1);
		}
		return(1);
	}
}

int		move_right(int x, int y, char** maze)
{
	char 	tmp;

	if (maze[x][y + 1] == 'X' || maze[x][y + 1] == '|' || maze[x][y + 1] == '-')
	{
		my_putstr("Vous avez heurté un mur! VOUS AVEZ PERDU !\n\n");
		return(-3);
	}
	else
	{
		tmp = maze[x][y];
		maze[x][y] = maze[x][y + 1];
		maze[x][y + 1] = tmp;
		if (maze[x][y] == '.')
		{
			my_putstr("Vous avez atteint la sortie du labyrinthe! VOUS GAGNEZ !\n\n");
			return(-1);
		}
		return(1);
	}
}

int		menu_check(char in, t_octocat infos, char** maze)
{
	int						i;
	int						response;
	t_fonctions_menu_game 	menu[5] = {
		{'w', &move_up},
		{'s', &move_down},
		{'a', &move_left},
		{'d', &move_right},
		{'E', NULL}
	};

	response = 0;
	if (in == 'q')
		return(-2);
	for (i = 0; menu[i].key != 'E'; i++)
	{
		if (menu[i].key == in)
			response = menu[i].function(infos.pos_x, infos.pos_y, maze);
	}
	return(response);
}
