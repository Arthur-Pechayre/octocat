/*
** my_strdup.c for my_strdup.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_02
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Mon Oct  5 21:47:38 2015 PECHAYRE Arthur
** Last update Mon Oct  5 21:55:19 2015 PECHAYRE Arthur
*/
#include <stdlib.h>

char    *my_strcpy(char *dest, char *src);

int     my_strlen(char *str);

char    *my_strdup(char *str)
{
  char *str_cpy;

  if (str)
  {
      str_cpy = malloc(my_strlen(str) * sizeof(*str));
      my_strcpy(str_cpy, str);
      return (str_cpy);
  }
  else
    return (0);
}
