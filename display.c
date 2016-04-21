/*                                                                                                          
** display.c for display.c in /home/pechay_a/Desk/octocat/display.c                            
**                                                                                                          
** Made by PECHAYRE Arthur                                                                                  
** Login   <pechay_a@etna-alternance.net>                                                                   
**                                                                                                          
** Started on  Mon Jan  18 09:00:00 2015 PECHAYRE Arthur                                                     
** Last update Fri Jan  22 16:59:59 2015 PECHAYRE Arthur                                                     
*/

#include "libmy/libmy.h"
#include "head.h"

void	maze_menu()
{
	my_putstr("\n\tUtilisez [W, A, S, D] pour vous deplacer dans le labyrinthe et atteindre la sortie signalée par la case verte\n\tEntrez 'q' pour quitter.\n");
	my_putstr("\tMove : ");
}

void	print_help()
{
	my_putstr("\n\n---- COMMANDE INCORRECTE ----\n\n");
}

void	maze_menu_hard()
{
	my_putstr("\n\tUtilisez [W, A, S, D] pour creer une séquence de déplacement afin de sortir Octocat du labyrinthe\n\tAttention vous n'avez pas le droit à l'erreur !\n\tEntrez 'q' pour quitter.\n");
	my_putstr("\tMove séquence : ");
}

void	maze_menu_blind()
{
	my_putstr("\n\tVous êtes AVEUGLE!\n\tUtilisez [W, A, S, D] pour vous deplacer dans le labyrinthe.\n\tEntrez 'q' pour quitter.\n");
	my_putstr("\tMove : ");
}
