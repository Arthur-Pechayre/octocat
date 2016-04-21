/*                                                                                                          
** main.c for main.c in /home/pechay_a/Desk/octocat/main.c                            
**                                                                                                          
** Made by PECHAYRE Arthur                                                                                  
** Login   <pechay_a@etna-alternance.net>                                                                   
**                                                                                                          
** Started on  Mon Jan  18 09:00:00 2015 PECHAYRE Arthur                                                     
** Last update Fri Jan  22 16:59:59 2015 PECHAYRE Arthur                                                     
*/

#include "libmy/libmy.h"
#include "head.h"

int		main()
{
	char		in;
	int			i;
	int			stop;
	int*		taille;
	t_menu 		menu[6] = {{'1', &game_casu}, {'2', &game_hard}, {'3', &game_blind},
						   {'4', &game_octoview}, {'E', NULL}};

	hello();
	for (stop = 1; stop == 1;)
	{
		menu_main();
		in = getchar();
		for (i = 0; menu[i].key != 'E'; i++)
		{
			if (menu[i].key == in)
			{		
				taille = choose_size(taille);
				stop = menu[i].function(taille[0], taille[1]);
			}
		}
	}
	return(0);
}
