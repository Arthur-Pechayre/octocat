/*
** my_strcmp.c for my_strcmp.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 22:01:44 2015 PECHAYRE Arthur
** Last update Sat Oct  3 22:29:29 2015 PECHAYRE Arthur
*/
int	my_strlen(char *str);

int	my_strcmp(char *s1, char *s2)
{
  int len1;
  int len2;
  int i;

  i = 0;
  len1 = my_strlen(s1);
  len2 = my_strlen(s2);
  while (i < len1 && i < len2)
    {
      if (s1[i] == s2[i])
	{
	  ++i;
	}
      else if (s1[i] > s2[i])
	{
	  return (1);
	}
      else
	return (-1);
    }
  return (0);
}
