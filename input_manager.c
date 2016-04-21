/*                                                                                                          
** input_manager.c for input_manager.c in /home/pechay_a/Desk/octocat/input_manager.c                            
**                                                                                                          
** Made by PECHAYRE Arthur                                                                                  
** Login   <pechay_a@etna-alternance.net>                                                                   
**                                                                                                          
** Started on  Mon Jan  18 09:00:00 2015 PECHAYRE Arthur                                                     
** Last update Fri Jan  22 16:59:59 2015 PECHAYRE Arthur                                                     
*/

#include "libmy/libmy.h"
#include "head.h"

char*	readLine()
{
	ssize_t	ret;
	char	 *buff;

	if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
	  	return (NULL);
	if ((ret = read(0, buff, 50)) > 1)
		{
	    	buff[ret - 1] = '\0';
	    	return (buff);
	  	}
	buff[0] = '\0';
	return (buff);
}

void 	clear_getchar()
{
	char c;

    do 
    {
        c = getchar();
    } while (c != '\n');
}

int* 	choose_size(int* taille)
{
	char		in;

	taille = malloc(2 * sizeof(int));
	clear_getchar();
	my_putstr("\nChaque partie est unique !\nChoisissez la taille de votre labyrinthe TOTALEMENT aléatoire! :\n\nS, M ou L? (Taille M par defaut) => ");
	in = getchar();	
	if (in == 'S' || in == 's')
	{
		taille[0] = 11;
		taille[1] = 11;
	}
	else if (in == 'L' || in == 'l')
	{
		taille[0] = 51;
		taille[1] = 101;
	}
	else
	{
		taille[0] = 31;
		taille[1] = 41;
	}
	clear_getchar();
	return(taille);
}
