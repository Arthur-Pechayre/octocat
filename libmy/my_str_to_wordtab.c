/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_02
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Mon Oct  5 21:48:35 2015 PECHAYRE Arthur
** Last update Mon Oct  5 21:59:44 2015 PECHAYRE Arthur
*/
#include <stdlib.h>

int	is_alfnum(char i)
{
  return ((i >= 48 && i <= 57) || (i >= 65 && i <= 90) || (i >= 97 && i <= 122));
}

char	**my_str_to_wordtab(char *str)
{
  char **tab;
  int i;
  int lonx;
  int lary;
  i = 0;
  lonx = 0;
  lary = 0;
  tab = malloc(200 * sizeof(char*));
  tab[lonx] = malloc(50 * sizeof(char));
  while (str[i] != 0)
    {
      if (is_alfnum(str[i]) == 1)
	{
	  tab[lonx][lary] = str[i];
	  ++lary;
	}
      else
	{
	  ++lonx;
	  tab[lonx] = malloc(50 * sizeof(char));
	  tab[lonx][lary] = 0;
	}
      ++i;
    }
  return (tab);
}
