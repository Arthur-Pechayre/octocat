/*                                                                                                          
** hello_bye.c for hello_bye.c in /home/pechay_a/Desk/octocat/main.c                            
**                                                                                                          
** Made by PECHAYRE Arthur                                                                                  
** Login   <pechay_a@etna-alternance.net>                                                                   
**                                                                                                          
** Started on  Mon Jan  18 09:00:00 2015 PECHAYRE Arthur                                                     
** Last update Fri Jan  22 16:59:59 2015 PECHAYRE Arthur                                                     
*/

#include "libmy/libmy.h"
#include "head.h"

void	hello()
{
	my_putstr("\t\t\033c");
	my_putstr("\t\t_______        _____                       _____ \n");
	my_putstr("\t\t__  __ \\_________  /_______ _____________ ___  /_\n");
	my_putstr("\t\t_  / / /_  ___/_  __/_  __ \\_  ___/_  __ \\`/_  __/\n");
	my_putstr("\t\t/ /_/ / / /__  / /_  / /_/ // /__  / /_/ / / /_  \n");
	my_putstr("\t\t\\____/  \\___/  \\__/  \\____/ \\___/  \\____/  \\__/  \n");
	my_putstr("\t\t                                                 \n\n\n");	
}

void	menu_main()
{
	my_putstr("---- Menu ----\n\n");
	my_putstr("Mode CASUAL : 1\nMode HARDCORE : 2\nMode BLIND : 3\nOCTO-MODE ! : 4\nQUIT Octocat : 0\n\n==> ");
}
