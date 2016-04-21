/*
** my_strstr.c for my_strstr.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 22:43:17 2015 PECHAYRE Arthur
** Last update Sat Oct  3 22:53:00 2015 PECHAYRE Arthur
*/
int	my_strcmp(char *s1, char *s2);

char	*my_strstr(char *str, char *to_find)
{
  while (*str != 0)
    {
      if ((my_strcmp(to_find, str) == 0) && (*str == *to_find))
	{
	  ++str;
	}
      return (str);
    }
  return ("null");
}
